import { createAction, handleActions } from "redux-actions";
import { takeLatest } from 'redux-saga/effects';
import { fetchItem, fetchItemList } from 'lib/api';
import createRequestSaga from 'lib/createRequestSaga';

// 액션 타입
export const FETCH_ONE = 'item/FETCH_ONE';
const FETCH_ONE_SUCCESS = 'item/FETCH_ONE_SUCCESS';
const FETCH_ONE_FAILURE = 'item/FETCH_ONE_FAILURE';

export const FETCH_LIST = 'item/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'item/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'item/FETCH_LIST_FAILURE';

// 액션 생성 함수
export const fetchOne = createAction(FETCH_ONE, (itemId) => itemId);
export const fetchList = createAction(FETCH_LIST);

// 비동기 액션을 수행하는 태스크 작성
const fetchOneSaga = createRequestSaga(FETCH_ONE, fetchItem);
const fetchListSaga = createRequestSaga(FETCH_LIST, fetchItemList);

// 코드그룹 사가 함수 작성
export function* itemSaga() {
  yield takeLatest(FETCH_ONE, fetchOneSaga);
  yield takeLatest(FETCH_LIST, fetchListSaga);
}

// 초기 상태
const initialState = {
  item: null,
  items: [],
  error: null,
};

// 리듀서 함수 정의
const item = handleActions(
  {
    [FETCH_ONE]: (state) => ({
      ...state,
      item: null,
    }),
    [FETCH_ONE_SUCCESS]: (state, action) => ({
      ...state,
      item: action.payload,
    }),
    [FETCH_ONE_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      items: [],
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      items: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
  },
  initialState,
);

export default item;
