import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';

// 리덕스 관련 모듈 임포트
import { createStore } from 'redux';
import { Provider } from 'react-redux';
import todos from './modules/todos';
import { composeWithDevTools } from 'redux-devtools-extension';
// 상태 복원 액션 생성 함수 임포트
import { restore } from './modules/todos';

// 스토어 생성
const store = createStore(todos, composeWithDevTools());

// 상태 복원 함수
function loadData() {
  try {
    const data = localStorage.getItem('react-todo-app-data');
    //console.log('loadData:', data);
    if (!data) return;
    // 상태 복원 액션 디스패치
    store.dispatch(restore(JSON.parse(data)));
  } catch (e) {
    console.log('localStorage is not working');
  }
}
// 상태 복원 함수 실행
loadData();

ReactDOM.render(
  <React.StrictMode>
    <Provider store={store}>
      <App />
    </Provider>
  </React.StrictMode>,
  document.getElementById('root')
);
