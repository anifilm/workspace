import React from 'react';

import MainLayout from 'layout/MainLayout';
import AdminSetupContainer from 'containers/member/AdminSetupContainer';

const AdminSetupPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <AdminSetupContainer />
    </MainLayout>
  );
}

export default AdminSetupPage;
