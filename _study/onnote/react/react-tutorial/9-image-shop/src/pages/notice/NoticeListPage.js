import React from 'react';

import MainLayout from 'layout/MainLayout';
import NoticeListContainer from 'containers/notice/NoticeListContainer';

const NoticeListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <NoticeListContainer />
    </MainLayout>
  );
};

export default NoticeListPage;
