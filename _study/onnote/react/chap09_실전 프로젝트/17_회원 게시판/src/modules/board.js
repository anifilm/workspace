import { createAction, handleActions } from "redux-actions";
import { takeLatest } from 'redux-saga/effects';
import { fetchBoard, fetchBoardList } from 'lib/api';
import createRequestSaga from 'lib/createRequestSaga';

// 액션 타입
export const FETCH_ONE = 'board/FETCH_ONE';
const FETCH_ONE_SUCCESS = 'board/FETCH_ONE_SUCCESS';
const FETCH_ONE_FAILURE = 'board/FETCH_ONE_FAILURE';

export const FETCH_LIST = 'board/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'board/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'board/FETCH_LIST_FAILURE';

// 액션 생성 함수
export const fetchOne = createAction(FETCH_ONE, (userNo) => userNo);
export const fetchList = createAction(FETCH_LIST);

// 비동기 액션을 수행하는 태스크 작성
const fetchOneSaga = createRequestSaga(FETCH_ONE, fetchBoard);
const fetchListSaga = createRequestSaga(FETCH_LIST, fetchBoardList);

// 코드그룹 사가 함수 작성
export function* boardSaga() {
  yield takeLatest(FETCH_ONE, fetchOneSaga);
  yield takeLatest(FETCH_LIST, fetchListSaga);
}

// 초기 상태
const initialState = {
  board: null,
  boards: [],
  error: null,
};

// 리듀서 함수 정의
const board = handleActions(
  {
    [FETCH_ONE]: (state) => ({
      ...state,
      board: null,
    }),
    [FETCH_ONE_SUCCESS]: (state, action) => ({
      ...state,
      board: action.payload,
    }),
    [FETCH_ONE_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      boards: [],
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      boards: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
  },
  initialState,
);

export default board;
