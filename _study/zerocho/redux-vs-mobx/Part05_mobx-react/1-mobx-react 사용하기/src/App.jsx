import React, { Component } from 'react';
import { observer } from 'mobx-react';
import { observable } from 'mobx';

import { userStore, postStore } from './store';

class App extends Component {
  state = observable({
    name: '',
    password: '',
  });

  onLogin = () => {
    userStore.logIn({
      nickname: 'zerocho',
      password: 'password',
    });
  };
  onLogout = () => {
    userStore.logOut();
  };
  onChangeName = (e) => {
    this.state.name = e.target.value;
  };
  onChangePassword = (e) => {
    this.state.password = e.target.value;
  };

  render() {
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
          <button onClick={this.onLogin}>로그인</button>
        ) : (
          <button onClick={this.onLogout}>로그아웃</button>
        )}
        <div>{postStore.data.length}</div>
        <input
          type="text"
          value={this.state.name}
          onChange={this.onChangeName}
        />
        <input
          type="password"
          value={this.state.password}
          onChange={this.onChangePassword}
        />
      </div>
    );
  }
}

export default observer(App);
