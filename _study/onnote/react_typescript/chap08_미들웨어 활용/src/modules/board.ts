import { createReducer } from 'typesafe-actions';
import { Board } from '../App';

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
  {},
);

export default board;
