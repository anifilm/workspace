import { createReducer } from 'typesafe-actions';
import { createAction } from 'redux-actions';
import { Dispatch } from 'redux';
import * as client from '../lib/api';
import { Board } from '../App';

// 액션 타입 선언
const FETCH = 'board/FETCH';
const FETCH_SUCCESS = 'board/FETCH_SUCCESS';
const FETCH_FAILURE = 'baord/FETCH_FAILURE';

const FETCH_LIST = 'board/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'board/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'board/FETCH_LIST_FAILURE';

// 액션 생성 함수 정의
export const fetchStart = createAction(FETCH);
export const fetchSuccess = createAction(FETCH_SUCCESS, (data: string) => data);
export const fetchFailure = createAction(FETCH_FAILURE, (err: any) => err);

export const fetchListStart = createAction(FETCH_LIST);
export const fetchListSuccess = createAction(FETCH_LIST_SUCCESS, (data: string) => data);
export const fetchListFailure = createAction(FETCH_LIST_FAILURE, (err: any) => err);

// 게시글 상세 조회 Thunk 생성 함수 정의
export const readBoardThunk = (boardNo: string) => {
  return async (dispatch: Dispatch) => {
    dispatch(fetchStart());
    try {
      const response = await client.fetchBoardApi(boardNo);
      dispatch(fetchSuccess(response.data));
    } catch (err) {
      dispatch(fetchFailure(err));
      throw err;
    }
  };
};
// 게시글 목록 조회 Thunk 생성 함수 정의
export const listBoardThunk = () => {
  return async (dispatch: Dispatch) => {
    dispatch(fetchListStart());
    try {
      const response = await client.fetchBoardListApi();
      dispatch(fetchListSuccess(response.data));
    } catch (err) {
      dispatch(fetchListFailure(err));
      throw err;
    }
  };
};

// 상태 인터페이스 정의
export interface BoardState {
  loading: {
    FETCH: boolean,
    FETCH_LIST: boolean,
  },
  board: Board,
  boards: Board[];
  error: any;
}

// 초기 상태
const initialState: BoardState = {
  loading: {
    FETCH: false,
    FETCH_LIST: false,
  },
  board: {
    boardNo: '',
    title: '',
    writer: '',
    content: '',
    regDate: '',
  },
  boards: [],
  error: null,
}

// 리듀서 함수 정의
const board = createReducer(
  initialState,
  {
    [FETCH]: (state) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH: true,
      },
    }),
    [FETCH_SUCCESS]: (state, action) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH: false,
      },
      board: action.payload,
    }),
    [FETCH_FAILURE]: (state, action) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH: false,
      },
      error: action.payload,
    }),
    [FETCH_LIST]: (state) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH_LIST: true,
      },
    }),
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH_LIST: false,
      },
      boards: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH_LIST: false,
      },
      error: action.payload,
    }),
  },
);

export default board;
