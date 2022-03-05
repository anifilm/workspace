import { combineReducers } from 'redux';
import { all } from 'redux-saga/effects';
import auth, { authSaga } from './auth';
import loading from './loading';
import codegroup, { codeGroupSaga } from './codegroup';
import codedetail, { codeDetailSaga } from './codedetail';
import member, { memberSaga } from './member';
import board, { boardSaga } from './board';

// 루트 리듀서
const rootReducer = combineReducers({
  auth,
  loading,
  codegroup,
  codedetail,
  member,
  board
});

// 루트 사가
export function* rootSaga() {
  yield all([
    authSaga(),
    codeGroupSaga(),
    codeDetailSaga(),
    memberSaga(),
    boardSaga(),
  ]);
}

export default rootReducer;
