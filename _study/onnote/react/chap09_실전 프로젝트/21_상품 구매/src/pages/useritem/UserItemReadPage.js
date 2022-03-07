import React from 'react';

import MainLayout from 'layout/MainLayout';
import UserItemReadContainer from 'containers/item/UserItemReadContainer';

const UserItemReadPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { userItemNo } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <UserItemReadContainer userItemNo={userItemNo} />
    </MainLayout>
  );
};

export default UserItemReadPage;
