import { createAction, handleActions } from "redux-actions";
import { takeLatest } from 'redux-saga/effects';
import { fetchUserItem, fetchUserItemList } from 'lib/api';
import createRequestSaga from 'lib/createRequestSaga';

// 액션 타입
export const FETCH_ONE = 'useritem/FETCH_ONE';
const FETCH_ONE_SUCCESS = 'useritem/FETCH_ONE_SUCCESS';
const FETCH_ONE_FAILURE = 'useritem/FETCH_ONE_FAILURE';

export const FETCH_LIST = 'useritem/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'useritem/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'useritem/FETCH_LIST_FAILURE';

// 액션 생성 함수
export const fetchOne = createAction(FETCH_ONE, (userItemNo) => userItemNo);
export const fetchList = createAction(FETCH_LIST);

// 비동기 액션을 수행하는 태스크 작성
const fetchOneSaga = createRequestSaga(FETCH_ONE, fetchUserItem);
const fetchListSaga = createRequestSaga(FETCH_LIST, fetchUserItemList);

// 코드그룹 사가 함수 작성
export function* useritemSaga() {
  yield takeLatest(FETCH_ONE, fetchOneSaga);
  yield takeLatest(FETCH_LIST, fetchListSaga);
}

// 초기 상태
const initialState = {
  userItem: null,
  userItems: [],
  error: null,
};

// 리듀서 함수 정의
const userItem = handleActions(
  {
    [FETCH_ONE]: (state) => ({
      ...state,
      userItem: null,
    }),
    [FETCH_ONE_SUCCESS]: (state, action) => ({
      ...state,
      userItem: action.payload,
    }),
    [FETCH_ONE_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      userItems: [],
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      userItems: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
  },
  initialState,
);

export default userItem;
