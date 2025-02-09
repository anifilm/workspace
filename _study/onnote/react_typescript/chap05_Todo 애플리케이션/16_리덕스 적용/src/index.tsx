import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';

// 리덕스 관련 모듈 임포트
import { createStore } from 'redux';
import { Provider } from 'react-redux';
import todos from './modules/todos';
import { composeWithDevTools } from 'redux-devtools-extension';

// 스토어 생성
const store = createStore(todos, composeWithDevTools());

ReactDOM.render(
  <React.StrictMode>
    <Provider store={store}>
      <App />
    </Provider>
  </React.StrictMode>,
  document.getElementById('root')
);
