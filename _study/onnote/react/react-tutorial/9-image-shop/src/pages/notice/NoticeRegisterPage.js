import React from 'react';

import MainLayout from 'layout/MainLayout';
import NoticeRegisterContainer from 'containers/notice/NoticeRegisterContainer';

const NoticeRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <NoticeRegisterContainer />
    </MainLayout>
  );
};

export default NoticeRegisterPage;
