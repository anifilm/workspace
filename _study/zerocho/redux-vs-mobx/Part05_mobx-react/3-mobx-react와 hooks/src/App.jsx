import React, { useCallback } from 'react';
import { observer, useLocalStore } from 'mobx-react';

import { userStore, postStore } from './store';

const App = () => {
  const state = useLocalStore(() => ({
    name: '',
    password: '',
    onChangeName(e) {
      this.name = e.target.value;
    },
    onChangePassword(e) {
      this.password = e.target.value;
    }
  }));

  const onLogin = useCallback(() => {
    userStore.logIn({
      nickname: 'zerocho',
      password: 'password',
    });
  }, []);

  const onLogout = useCallback(() => {
    userStore.logOut();
  }, []);

    return (
      <div>
        {userStore.isLoggingIn ? (
          <div>로그인 중...</div>
        ) : userStore.data ? (
          <div>{userStore.data.nickname}님 안녕하세요.</div>
        ) : (
          <div>로그인 해주세요.</div>
        )}
        {!userStore.data ? (
          <button onClick={onLogin}>로그인</button>
        ) : (
          <button onClick={onLogout}>로그아웃</button>
        )}
        <div>{postStore.data.length}</div>
        <input
          type="text"
          value={state.name}
          onChange={onChangeName}
        />
        <input
          type="password"
          value={state.password}
          onChange={onChangePassword}
        />
      </div>
    );
}

export default observer(App);
