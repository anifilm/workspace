import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeDetailListContainer from 'containers/codedetail/CodeDetailListContainer';

const CodeDetailListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeDetailListContainer />
    </MainLayout>
  );
};

export default CodeDetailListPage;
