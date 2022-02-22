import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';

// 리덕스 관련 모듈 임포트
import { Provider } from 'react-redux';
import todos from './reducers/todos';
// 상태 복원 액션 생성 함수 임포트
import { restore } from './actions/todos';
// 스토어 생성 함수 임포트
import configureStore from './store';

// 스토어 생성
const store = configureStore(todos);

// 상태 복원 함수 (즉시 실행)
(function loadData() {
  try {
    const data = localStorage.getItem('todo-app-data');
    //console.log('loadData data:', data);
    if (!data) return;
    // 상태 복원 액션 디스패치
    store.dispatch(restore(JSON.parse(data)));
  } catch (e) {
    console.log('localStorage is not working');
  }
})();

// 리덕스 적용
ReactDOM.render(
  <Provider store={store}>
    <App />
  </Provider>,
  document.getElementById('root'),
);
