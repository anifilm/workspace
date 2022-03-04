import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeDetailReadContainer from 'containers/codedetail/CodeDetailReadContainer';

const CodeDetailReadPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { groupCode, codeValue } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeDetailReadContainer groupCode={groupCode} codeValue={codeValue} />
    </MainLayout>
  );
};

export default CodeDetailReadPage;
