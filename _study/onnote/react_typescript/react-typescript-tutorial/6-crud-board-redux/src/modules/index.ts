import { combineReducers } from 'redux';

import board from './board';
import loading from './loading';

import { BoardState } from '../modules/board';
import { LoadingState } from '../modules/loading';

export interface RootState {
  board: BoardState;
  loading: LoadingState;
}

// 루트 리듀서
const rootReducer = combineReducers({
  board,
  loading,
});

export default rootReducer;
