import { createStore, compose, applyMiddleware } from 'redux';

import reducer from './reducers/index.js';
import { logIn, logOut } from './actions/user.js';
import { addPost } from './actions/post.js';

const initialState = {
  user: {
    isLoggingIn: false,
    data: null,
  },
  posts: [],
  //comments: [],
  //favorites: [],
  //history: [],
  //likes: [],
  //followers: [],
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

const enhancer = applyMiddleware(
  firstMiddleware,
  thunkMiddleware,
);

const store = createStore(reducer, initialState, enhancer);
/*store.subscribe(() => { // react-redux 안에 있음
  console.log('changed'); // 화면을 바꿔주는 코드는 여기서
});*/

console.log('1st', store.getState());

// --------------------------------------

store.dispatch(logIn({
  id: 1,
  name: 'zerocho',
  admin: true,
}));

console.log('2nd', store.getState());

/*store.dispatch(addPost({
  userId: 1,
  id: 1,
  content: '안녕하세요. 리덕스',
}));

console.log('3rd', store.getState());

store.dispatch(addPost({
  userId: 1,
  id: 2,
  content: '두번째 리덕스',
}));

console.log('4th', store.getState());

store.dispatch(logOut());

console.log('5th', store.getState());*/
