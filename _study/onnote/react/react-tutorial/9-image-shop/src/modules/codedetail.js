import { createAction, handleActions } from "redux-actions";
import { takeLatest } from 'redux-saga/effects';
import { fetchCodeDetail, fetchCodeDetailList } from 'lib/api';
import createRequestSaga from 'lib/createRequestSaga';

// 액션 타입
export const FETCH_ONE = 'codeDetail/FETCH_ONE';
const FETCH_ONE_SUCCESS = 'codeDetail/FETCH_ONE_SUCCESS';
const FETCH_ONE_FAILURE = 'codeDetail/FETCH_ONE_FAILURE';

export const FETCH_LIST = 'codeDetail/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'codeDetail/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'codeDetail/FETCH_LIST_FAILURE';

// 액션 생성 함수
export const fetchOne = createAction(FETCH_ONE, (groupCode, codeValue) => ({ groupCode, codeValue }));
export const fetchList = createAction(FETCH_LIST);

// 비동기 액션을 수행하는 태스크 작성
const fetchOneSaga = createRequestSaga(FETCH_ONE, fetchCodeDetail);
const fetchListSaga = createRequestSaga(FETCH_LIST, fetchCodeDetailList);

// 코드그룹 사가 함수 작성
export function* codeDetailSaga() {
  yield takeLatest(FETCH_ONE, fetchOneSaga);
  yield takeLatest(FETCH_LIST, fetchListSaga);
}

// 초기 상태
const initialState = {
  codeDetail: null,
  codeDetails: [],
  error: null,
};

// 리듀서 함수 정의
const codeDetail = handleActions(
  {
    [FETCH_ONE]: (state) => ({
      ...state,
      codeDetail: null,
    }),
    [FETCH_ONE_SUCCESS]: (state, action) => ({
      ...state,
      codeDetail: action.payload,
    }),
    [FETCH_ONE_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      codeDetails: [],
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      codeDetails: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      error: action.payload,
    }),
  },
  initialState,
);

export default codeDetail;
