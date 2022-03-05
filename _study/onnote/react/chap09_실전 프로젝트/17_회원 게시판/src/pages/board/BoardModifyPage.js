import React from 'react';

import MainLayout from 'layout/MainLayout';
import BoardModifyContainer from 'containers/board/BoardModifyContainer';

const BoardModifyPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <BoardModifyContainer boardNo={boardNo} />
    </MainLayout>
  );
};

export default BoardModifyPage;
