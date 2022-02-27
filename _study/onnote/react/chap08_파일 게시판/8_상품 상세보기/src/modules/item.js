import { createAction, handleActions } from 'redux-actions';
import { takeLatest, call, put } from 'redux-saga/effects';
import { fetchItemApi } from '../lib/api';
import {
  startLoading,
  endLoading,
} from './loading';


// 액션 타입
const FETCH_SUCCESS = 'item/FETCH_SUCCESS';
const FETCH_FAILURE = 'item/FETCH_FAILURE';

// 상세 조회 액션 타입
export const FETCH_ITEM = 'item/FETCH_ITEM';

// 액션 생성 함수
export const fetchSuccess = createAction(FETCH_SUCCESS, (data) => data);
export const fetchFailure = createAction(FETCH_FAILURE, (err) => err);

// 상제 조회 액션 생성 함수
export const fetchItem = createAction(FETCH_ITEM, (itemId) => itemId);

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
// 상세 조회 태스크 수행
export function* itemSaga() {
  yield takeLatest(FETCH_ITEM, fetchItemSaga);
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
  },
  initialState,
);

export default item;
