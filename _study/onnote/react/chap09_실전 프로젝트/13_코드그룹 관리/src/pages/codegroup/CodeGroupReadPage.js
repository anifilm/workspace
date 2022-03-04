import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeGroupReadContainer from 'containers/codegroup/CodeGroupReadContainer';

const CodeGroupReadPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { groupCode } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeGroupReadContainer groupCode={groupCode} />
    </MainLayout>
  );
};

export default CodeGroupReadPage;
