import React from 'react';

import MainLayout from 'layout/MainLayout';
import AdminSetupContainer from 'containers/member/AdminSetupContainer';

// 메인 레이아웃 적용
const AdminSetupPage = () => {
  return (
    <MainLayout>
      <AdminSetupContainer />
    </MainLayout>
  );
}

export default AdminSetupPage;
