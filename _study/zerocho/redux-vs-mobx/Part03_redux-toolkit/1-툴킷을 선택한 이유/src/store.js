import { configureStore } from '@reduxjs/toolkit';

import reducer from './reducers';

const firstMiddleware = (store) => (next) => (action) => {
  console.log('logging:', action); // dispatch 전에 실행
  next(action);
  //console.log('changed'); // dispatch 후에 실행
}

const store = configureStore({
  reducer,
  middleware: (getDefaultMiddleware) => getDefaultMiddleware().concat(firstMiddleware),
  devTools: process.env.NODE_ENV !== 'production',
});

export default store;
