import React, { useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { createSelector } from '@reduxjs/toolkit'; // reselect

import { logIn } from './actions/user.js';
import userSlice from './reducers/userSlice.js';

const priceSelector = (state) => state.user.prices;
const sumPriceSelector = createSelector(
  priceSelector,
  (prices) => prices.reduce((a, b) => a + b, 0),
);

const App = () => {
  const user = useSelector((state) => state.user);
  //const prices = useSelector((state) => state.user.price);
  const totalPrices = useSelector(sumPriceSelector);
  const { list } = useSelector((state) => state.posts);
  const dispatch = useDispatch();

  const onLogin = useCallback(() => {
    dispatch(logIn({
      id: 'zerocho',
      password: 'password',
    }));
  }, []);
  const onLogout = useCallback(() => {
    dispatch(userSlice.actions.logOut());
  }, []);

  /*const totalPrice = useMemo(() => {
    console.log('memo');
    return prices.reduce((a, b) => a + b, 0); // 100만번 연산이라 가정
  }, [prices]);*/

  return (
    <div>
      {user.isLoggingIn ? (
        <div>로그인 중...</div>
      ) : user.data ? (
        <>
          <div>{user.data.nickname}님 안녕하세요.</div>
          {totalPrices}원
        </>
      ) : (
        <div>로그인 해주세요.</div>
      )}
      {!user.data ? (
        <button onClick={onLogin}>로그인</button>
      ) : (
        <button onClick={onLogout}>로그아웃</button>
      )}
    </div>
  );
};

export default App;
