import { createAction, handleActions } from "redux-actions";
import { takeLatest } from 'redux-saga/effects';
import { fetchNotice, fetchNoticeList } from 'lib/api';
import createRequestSaga from 'lib/createRequestSaga';

// 액션 타입
export const FETCH_ONE = 'notice/FETCH_ONE';
const FETCH_ONE_SUCCESS = 'notice/FETCH_ONE_SUCCESS';
const FETCH_ONE_FAILURE = 'notice/FETCH_ONE_FAILURE';

export const FETCH_LIST = 'notice/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'notice/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'notice/FETCH_LIST_FAILURE';

// 액션 생성 함수
export const fetchOne = createAction(FETCH_ONE, (userNo) => userNo);
export const fetchList = createAction(FETCH_LIST);

// 비동기 액션을 수행하는 태스크 작성
const fetchOneSaga = createRequestSaga(FETCH_ONE, fetchNotice);
const fetchListSaga = createRequestSaga(FETCH_LIST, fetchNoticeList);

// 코드그룹 사가 함수 작성
export function* noticeSaga() {
  yield takeLatest(FETCH_ONE, fetchOneSaga);
  yield takeLatest(FETCH_LIST, fetchListSaga);
}

// 초기 상태
const initialState = {
  notice: null,
  notices: [],
  error: null,
};

// 리듀서 함수 정의
const notice = handleActions(
  {
    [FETCH_ONE]: (state) => ({
      ...state,
      notice: null,
    }),
    [FETCH_ONE_SUCCESS]: (state, action) => ({
      ...state,
      notice: action.payload,
    }),
    [FETCH_ONE_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      notices: [],
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      notices: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
  },
  initialState,
);

export default notice;
