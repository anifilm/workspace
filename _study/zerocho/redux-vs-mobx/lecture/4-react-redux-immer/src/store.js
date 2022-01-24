import { createStore, compose, applyMiddleware } from 'redux';
import  { composeWithDevTools } from 'redux-devtools-extension';

import reducer from './reducers';
//import { logIn, logOut } from './actions/user';
//import { addPost } from './actions/post';

const initialState = {
  user: {
    isLoggingIn: false,
    data: null,
  },
  posts: [],
};

const firstMiddleware = (store) => (next) => (action) => {
  console.log('logging:', action); // dispatch 전에 실행
  next(action);
  //console.log('changed'); // dispatch 후에 실행
}

const thunkMiddleware = (store) => (next) => (action) => {
  if (typeof action === 'function') { // 비동기
    return action(store.dispatch, store.getState);
  }
  return next(action); // 동기
};

const enhancer = process.env.NODE_ENV === 'production'
  ? compose(
    applyMiddleware(
      firstMiddleware,
      thunkMiddleware,
    ),
  )
  : composeWithDevTools(
    applyMiddleware(
      firstMiddleware,
      thunkMiddleware,
    ),
  );

const store = createStore(reducer, initialState, enhancer);

export default store;
