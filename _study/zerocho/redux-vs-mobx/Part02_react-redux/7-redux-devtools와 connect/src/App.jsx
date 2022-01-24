import React, { Component } from 'react';
import { connect } from 'react-redux';

import { logIn, logOut } from './actions/user.js';

class App extends Component {
  onLogin = () => {
    this.props.dispatchLogIn({
      id: 'zerocho',
      password: '비밀번호',
    });
  };
  onLogout = () => {
    this.props.dispatchLogOut();
  };

  render() {
    const { user } = this.props;
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
          <button onClick={this.onLogin}>로그인</button>
        ) : (
          <button onClick={this.onLogout}>로그아웃</button>
        )}
      </div>
    );
  }
};

const mapStateToProps = (state) => ({
  user: state.user,
  posts: state.posts,
}); // reselect

const mapDispatchToProps = (dispatch) => ({
  dispatchLogIn: (data) => dispatch(logIn(data)),
  dispatchLogOut: () => dispatch(logOut()),
});

export default connect(mapStateToProps, mapDispatchToProps)(App);
