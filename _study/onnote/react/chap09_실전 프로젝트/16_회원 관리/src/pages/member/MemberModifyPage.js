import React from 'react';

import MainLayout from 'layout/MainLayout';
import MemberModifyContainer from 'containers/member/MemberModifyContainer';

const MemberModifyPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { userNo } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <MemberModifyContainer userNo={userNo} />
    </MainLayout>
  );
};

export default MemberModifyPage;
