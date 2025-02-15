import React from 'react';
import { Menu, Icon, Badge } from 'antd';
import axios from 'axios';
import { USER_SERVER } from '../../../Config';
import { withRouter } from 'react-router-dom';
import { useSelector } from 'react-redux';

const RightMenu = (props) => {
  // 인증 정보를 리덕스 state에서 가져오므로 느리다.(TODO: 개선 필요)
  const user = useSelector((state) => state.user);

  let username = '';
  if (user.userData) {
    username = user.userData.name;
  }

  const logoutHandler = () => {
    axios.get(`${USER_SERVER}/logout`).then((response) => {
      if (response.status === 200) {
        props.history.push('/login');
      } else {
        alert('Log Out Failed');
      }
    });
  };

  if (user.userData && user.userData.isAuth) {
    return (
      <Menu mode={props.mode}>
        <Menu.Item key="cart" style={{ paddingBottom: 3 }}>
          <Badge>
            <a href="/user/cart" style={{ marginRight: -22, color: '#667777' }}>
              <Icon
                type="shopping-cart"
                style={{ fontSize: 30, marginBottom: 3 }}
              />
            </a>
          </Badge>
        </Menu.Item>
        <Menu.Item key="logout">
          <a onClick={logoutHandler}>{username} (Logout)</a>
        </Menu.Item>
      </Menu>
    );
  } else {
    return (
      <Menu mode={props.mode}>
        <Menu.Item key="app">
          <a href="/register">Signup</a>
        </Menu.Item>
        <Menu.Item key="mail">
          <a href="/login">Signin</a>
        </Menu.Item>
      </Menu>
    );
  }
};

export default withRouter(RightMenu);
