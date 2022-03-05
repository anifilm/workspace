import React from 'react';

import MainLayout from 'layout/MainLayout';
import MemberListContainer from 'containers/member/MemberListContainer';

const MemberListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <MemberListContainer />
    </MainLayout>
  );
};

export default MemberListPage;
