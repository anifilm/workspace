import React from 'react';
import { Link } from 'react-router-dom';

const MainHeader = ({ isAuthorized, userInfo, onLogout }) => {
  return (
    <div align="right">
      {isAuthorized && userInfo && (
        <div>
          <span>{userInfo.userName}님 환영합니다.</span>{' '}
          {/* eslint-disable-next-line jsx-a11y/anchor-is-valid */}
          <a onClick={onLogout} style={{ cursor: 'pointer' }}>로그아웃</a>
        </div>
      )}
      {!isAuthorized && !userInfo && (
        <Link to='/signin'>로그인</Link>
      )}
    </div>
  );
}

export default MainHeader;
