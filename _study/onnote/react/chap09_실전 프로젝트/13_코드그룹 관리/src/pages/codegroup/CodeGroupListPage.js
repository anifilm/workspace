import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeGroupListContainer from 'containers/codegroup/CodeGroupListContainer';

const CodeGroupListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeGroupListContainer />
    </MainLayout>
  );
};

export default CodeGroupListPage;
