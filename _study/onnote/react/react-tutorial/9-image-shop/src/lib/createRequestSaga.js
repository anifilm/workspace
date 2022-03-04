import { createAction } from 'redux-actions';
import { call, put } from 'redux-saga/effects';
import { startLoading, endLoading } from 'modules/loading';

export default function createRequestSaga(type, request) {
  const CALL_SUCCESS = `${type}_SUCCESS`;
  const CALL_FAILURE = `${type}_FAILURE`;

  const callSuccess = createAction(CALL_SUCCESS, (data) => data);
  const callFailure = createAction(CALL_FAILURE, (err) => err);

  return function* (action) {
    yield put(startLoading(type));
    try {
      const response = yield call(request, action.payload);
      yield put(callSuccess(response.data));
    } catch (err) {
      yield put(callFailure(err));
    }
    yield put(endLoading(type));
  };
}
