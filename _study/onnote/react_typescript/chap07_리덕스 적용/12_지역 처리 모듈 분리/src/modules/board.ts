import { createReducer } from 'typesafe-actions';
import { createAction } from 'redux-actions';
import { Board } from '../App';

// 액션 타입
//const FETCH = 'board/FETCH';
const FETCH_SUCCESS = 'board/FETCH_SUCCESS';
const FETCH_FAILURE = 'board/FETCH_FAILURE';

//const FETCH_LIST = 'board/FETCH_LIST';
const FETCH_LIST_SUCCESS = 'board/FETCH_LIST_SUCCESS';
const FETCH_LIST_FAILURE = 'board/FETCH_LIST_FAILURE';

const CHANGE_TITLE = 'board/CHANGE_TITLE';
const CHANGE_CONTENT = 'board/CHANGE_CONTENT';

// 액션 생성 함수
//export const fetchStart = createAction(FETCH);
export const fetchSuccess = createAction(FETCH_SUCCESS, (data: string) => data);
export const fetchFailure = createAction(FETCH_FAILURE, (err: any) => err);

//export const fetchListStart = createAction(FETCH_LIST);
export const fetchListSuccess = createAction(FETCH_LIST_SUCCESS, (data: string) => data);
export const fetchListFailure = createAction(FETCH_LIST_FAILURE, (err: any) => err);

export const changeTitle = createAction(CHANGE_TITLE, (title: string) => title);
export const changeContent = createAction(CHANGE_CONTENT, (content: string) => content);

// 상태 인터페이스 정의
export interface BoardState {
  //loading: {
  //  FETCH: boolean,
  //  FETCH_LIST: boolean,
  //},
  board: Board,
  boards: Board[],
  error: any,
}

// 초기 상태
const initialState: BoardState = {
  //loading: {
  //  FETCH: false,
  //  FETCH_LIST: false,
  //},
  board: {
    boardNo: '',
    title: '',
    writer: '',
    content: '',
    regDate: '',
  },
  boards: [],
  error: null,
};

// 리듀서 함수 정의
const board = createReducer(
  initialState,
  {
    /*[FETCH]: (state) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH: true,
      },
    }),*/
    [FETCH_SUCCESS]: (state, action) => ({
      ...state,
      //loading: {
      //  ...state.loading,
      //  FETCH: false,
      //},
      board: action.payload,
    }),
    [FETCH_FAILURE]: (state) => ({
      ...state,
      //loading: {
      //  ...state.loading,
      //  FETCH: false,
      //},
    }),
    /*[FETCH_LIST]: (state) => ({
      ...state,
      loading: {
        ...state.loading,
        FETCH_LIST: true,
      },
    }),*/
    [FETCH_LIST_SUCCESS]: (state, action) => ({
      ...state,
      //loading: {
      //  ...state.loading,
      //  FETCH_LIST: false,
      //},
      boards: action.payload,
    }),
    [FETCH_LIST_FAILURE]: (state, action) => ({
      ...state,
      //loading: {
      //  ...state.loading,
      //  FETCH_LIST: false,
      //},
      error: action.payload,
    }),
    [CHANGE_TITLE]: (state, { payload: title }) => ({
      ...state,
      board: {
        ...state.board,
        title,
      },
    }),
    [CHANGE_CONTENT]: (state, { payload: content }) => ({
      ...state,
      board: {
        ...state.board,
        content,
      },
    }),
  },
);

export default board;
