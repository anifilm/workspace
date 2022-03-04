import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';
import { BrowserRouter } from 'react-router-dom';

// 리덕스와 미들웨어 관련 모듈 임포트
import { createStore, applyMiddleware } from 'redux';
import { Provider } from 'react-redux';
import rootReducer, { rootSaga } from 'modules';
import { composeWithDevTools } from 'redux-devtools-extension';
import createSagaMiddleware from 'redux-saga';

// 쿠키 로그인 관련 모듈 임포트
import Cookies from 'js-cookie';
import { setAccessToken, checkUserInfo } from 'modules/auth';
import client from 'lib/client';

// 리덕스 사가 미들웨어 생성
const sagaMiddleware = createSagaMiddleware();

// 스토어 생성
const store = createStore(
  rootReducer,
  composeWithDevTools(applyMiddleware(sagaMiddleware)),
);

// 저장된 토큰으로 로그인 처리 함수 정의
function loadUser() {
  try {
    const savedToken = Cookies.get('accessToken');
    if (!savedToken) return;
    store.dispatch(setAccessToken(savedToken));
    client.defaults.headers.common.Authorization = `Bearer ${savedToken}`;
    store.dispatch(checkUserInfo());
  } catch (err) {
    console.log(err);
  }
}

// 리덕스 사가 미들웨어 실행
sagaMiddleware.run(rootSaga);

// 저장된 토큰으로 로그인 처리 함수 실행
loadUser();

// 리덕스 적용
ReactDOM.render(
  <Provider store={store}>
    <BrowserRouter>
      <App />
    </BrowserRouter>
  </Provider>,
  document.getElementById('root')
);
