import React from 'react';

import MainLayout from 'layout/MainLayout';
import CodeGroupModifyContainer from 'containers/codegroup/CodeGroupModifyContainer';

const CodeGroupModifyPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { groupCode } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CodeGroupModifyContainer groupCode={groupCode} />
    </MainLayout>
  );
};

export default CodeGroupModifyPage;
