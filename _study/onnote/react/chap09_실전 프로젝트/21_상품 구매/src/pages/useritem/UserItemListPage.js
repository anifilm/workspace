import React from 'react';

import MainLayout from 'layout/MainLayout';
import UserItemListContainer from 'containers/item/UserItemListContainer';

const UserItemListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <UserItemListContainer />
    </MainLayout>
  );
};

export default UserItemListPage;
