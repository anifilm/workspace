import React from 'react';
import { connect, useDispatch } from 'react-redux';

import MainHeader from 'components/common/MainHeader';
import { getAuthorized } from 'modules/selector';
import { setAccessToken, setUserInfo } from 'modules/auth';
import client from 'lib/client';
import Cookies from 'js-cookie';

// 로그인여부와 로그인한 사용자 정보 속성값으로 수신
const MainHeaderContainer = ({ isAuthorized, userInfo }) => {
  const dispatch = useDispatch();

  const onLogout = () => {
    delete client.defaults.headers.common.Authorization;
    Cookies.remove('accessToken');

    dispatch(setAccessToken(''));
    dispatch(setUserInfo(null));
  }

  return (
    <MainHeader
      isAuthorized={isAuthorized}
      userInfo={userInfo}
      onLogout={onLogout}
    />
  );
};

// 스토어 상태를 가공한 정보를 컴포넌트 속성으로 전달
export default connect((state) => {
  return {
    isAuthorized: getAuthorized(state),
    userInfo: state.auth.userInfo,
  };
})(MainHeaderContainer);
