import React from 'react';

import MainLayout from 'layout/MainLayout';
import MemberRegisterContainer from 'containers/member/MemberRegisterContainer';

const MemberRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <MemberRegisterContainer />
    </MainLayout>
  );
};

export default MemberRegisterPage;
