import { createAction, handleActions } from 'redux-actions';
import { takeLatest, call, put } from 'redux-saga/effects';
import { signIn, getUserInfo } from 'lib/api';
import client from 'lib/client';
import Cookies from 'js-cookie';

// 액션 타입
const SET_ACCESS_TOKEN = 'auth/SET_ACCESS_TOKEN';
const LOGIN = 'auth/LOGIN';

const SET_USER_INFO = 'auth/SET_USER_INFO';
const CHECK_USER_INFO = 'auth/CHECK_USER_INFO';

// 액션 생성 함수
export const setAccessToken = createAction(SET_ACCESS_TOKEN, (accessToken) => accessToken);
export const login = createAction(LOGIN, ({ userId, userPw }) => ({ userId, userPw }));

export const setUserInfo = createAction(SET_USER_INFO, (userInfo) => userInfo);
export const checkUserInfo = createAction(CHECK_USER_INFO);

// 비동기 액션을 수행하는 태스크 작성
function* loginSaga(action) {
  try {
    const { userId, userPw } = action.payload;
    const response = yield call(signIn, userId, userPw);
    const { authorization } = response.headers;
    const accessToken = authorization.substring(7);

    yield put(setAccessToken(accessToken));
    client.defaults.headers.common.Authorization = `Bearer ${accessToken}`;

    // 쿠키에 액세스 토큰 저장 (expires: 1 day)
    Cookies.set('accessToken', accessToken, { expires: 1 });
  } catch (err) {
    console.log(err);
  }
}
// 비동기 액션을 수행하는 태스크 작성
function* checkUserInfoSaga() {
  try {
    const response = yield call(getUserInfo);
    yield put(setUserInfo(response.data));
  } catch (err) {
    console.log(err);
  }
}

// 태스크 실행 사가 함수
export function* authSaga() {
  yield takeLatest(LOGIN, loginSaga);
  yield takeLatest(CHECK_USER_INFO, checkUserInfoSaga);
}

// 초기 상태
const initialState = {
  accessToken: '',
  userInfo: null, // 로그인 사용자 정보
};

// 리듀서 함수 정의
const auth = handleActions(
  {
    [SET_ACCESS_TOKEN]: (state, action) => ({
      ...state,
      accessToken: action.payload,
    }),
    [SET_USER_INFO]: (state, action) => ({
      ...state,
      userInfo: action.payload,
    }),
  },
  initialState,
);

export default auth;
