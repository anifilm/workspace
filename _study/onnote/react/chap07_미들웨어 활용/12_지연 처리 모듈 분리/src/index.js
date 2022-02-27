import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';
import { BrowserRouter } from 'react-router-dom';

// 리덕스관련 모듈 임포트
import { createStore, applyMiddleware } from 'redux';
import { Provider } from 'react-redux';
//import board from './modules/board';
import rootReducer from './modules';
import { composeWithDevTools } from 'redux-devtools-extension';
// ReduxThunk 임포트
import ReduxThunk from 'redux-thunk';

// 스토어 생성
const store = createStore(
  rootReducer,
  composeWithDevTools(applyMiddleware(ReduxThunk)),
);

ReactDOM.render(
  <Provider store={store}>
    <BrowserRouter>
      <App />
    </BrowserRouter>
  </Provider>,
  document.getElementById('root')
);
