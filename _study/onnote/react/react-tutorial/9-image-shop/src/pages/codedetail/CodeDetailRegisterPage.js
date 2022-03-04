import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeDetailRegisterContainer from 'containers/codedetail/CodeDetailRegisterContainer';

const CodeDetailRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeDetailRegisterContainer />
    </MainLayout>
  );
};

export default CodeDetailRegisterPage;
