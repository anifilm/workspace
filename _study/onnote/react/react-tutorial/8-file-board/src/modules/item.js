import { createAction, handleActions } from 'redux-actions';
import { takeLatest, call, put } from 'redux-saga/effects';
import { fetchItemApi, fetchItemListApi } from '../lib/api';
import {
  startLoading,
  endLoading,
} from './loading';

// 액션 타입
const FETCH_SUCCESS = 'item/FETCH_SUCCESS';
const FETCH_FAILURE = 'item/FETCH_FAILURE';

const FETCH_LIST_SUCCESS = 'item/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'item/FETCH_LIST_FAILURE';

// 상세 조회 액션 타입
export const FETCH_ITEM = 'item/FETCH_ITEM';
export const FETCH_ITEM_LIST = 'item/FETCH_ITEM_LIST';

// 액션 생성 함수
export const fetchSuccess = createAction(FETCH_SUCCESS, (data) => data);
export const fetchFailure = createAction(FETCH_FAILURE, (err) => err);

export const fetchListSuccess = createAction(FETCH_LIST_SUCCESS, (data) => data);
export const fetchListFailure = createAction(FETCH_LIST_FAILURE, (err) => err);

// 상제 조회 액션 생성 함수
export const fetchItem = createAction(FETCH_ITEM, (itemId) => itemId);
export const fetchItemList = createAction(FETCH_ITEM_LIST);

// 상품 상세 조회 태스크 비동기 함수
export function* fetchItemSaga(action) {
  yield put(startLoading(FETCH_ITEM));
  try {
    const response = yield call(fetchItemApi, action.payload);
    yield put(fetchSuccess(response.data));
  } catch (err) {
    yield put(fetchFailure(err));
  }
  yield put(endLoading(FETCH_ITEM));
}
// 상품 목록 조회 태스크 비동기 함수
function* fetchItemListSaga() {
  yield put(startLoading(FETCH_ITEM_LIST));
  try {
    const response = yield call(fetchItemListApi);
    yield put(fetchListSuccess(response.data));
  } catch (err) {
    yield put(fetchListFailure(err));
  }
  yield put(endLoading(FETCH_ITEM_LIST));
}
// 상세 조회 태스크 수행
export function* itemSaga() {
  yield takeLatest(FETCH_ITEM, fetchItemSaga);
  yield takeLatest(FETCH_ITEM_LIST, fetchItemListSaga);
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
    [FETCH_SUCCESS]: (state, action) => ({
      ...state,
      item: action.payload,
    }),
    [FETCH_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
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
