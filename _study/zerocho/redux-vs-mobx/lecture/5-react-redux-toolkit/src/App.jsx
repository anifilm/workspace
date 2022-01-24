import React, { useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import { logIn } from './actions/user.js';
import userSlice from './reducers/userSlice.js';

const App = () => {
  const user = useSelector((state) => state.user);
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

  return (
    <div>
      {user.isLoggingIn ? (
        <div>로그인 중...</div>
      ) : user.data ? (
        <div>{user.data.nickname}님 안녕하세요.</div>
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
