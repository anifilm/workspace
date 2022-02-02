import { all, fork, call, put, takeLatest } from 'redux-saga/effects';
import { LOG_IN, LOG_IN_FAILURE, LOG_IN_SUCCESS } from '../reducers/user';

function loginAPI() {
  // 서버에 요청을 보내는 부분
}

function* login() {
  try {
    yield call(loginAPI);
    yield put({ // put은 dispatch와 동일
      type: LOG_IN_SUCCESS,
    });
  } catch (err) { // loginAPI 실패
    console.error(err);
    yield put({
      type: LOG_IN_FAILURE,
    });
  }
}

function* watchLogin() {
  yield takeLatest(LOG_IN, login);
}

export default function* userSaga() {
  yield all([
    fork(watchLogin),
  ]);
}
