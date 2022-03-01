import { combineReducers } from 'redux';
import { all } from 'redux-saga/effects';
import item, { itemSaga } from './item';
import loading from './loading';

// 상태 인터페이스 임포트
import { ItemState } from './item';
import { LoadingState } from './loading';

// 루트 상태 인터페이스 정의
export interface RootState {
  item: ItemState;
  loading: LoadingState;
}

// 루트 리듀서
const rootReducer = combineReducers({
  item,
  loading,
});

// 루트 사가
export function* rootSaga() {
  yield all([itemSaga()]);
}

export default rootReducer;
