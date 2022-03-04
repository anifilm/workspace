import React from 'react';
import { Link } from 'react-router-dom';

const MainHeader = ({ isAuthorized, userInfo }) => {
  return (
    <div align="right">
      {isAuthorized && userInfo && (
        <div><span>{userInfo.userName}님 환영합니다.</span></div>
      )}
      {!isAuthorized && !userInfo && (
        <Link to='/signin'>로그인</Link>
      )}
    </div>
  );
}

export default MainHeader;
