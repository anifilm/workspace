import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeGroupRegisterContainer from 'containers/codegroup/CodeGroupRegisterContainer';

const CodeGroupRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeGroupRegisterContainer />
    </MainLayout>
  );
};

export default CodeGroupRegisterPage;
