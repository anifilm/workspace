import React from 'react';

import MainLayout from 'layout/MainLayout';
import BoardListContainer from 'containers/board/BoardListContainer';

const BoardListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <BoardListContainer />
    </MainLayout>
  );
};

export default BoardListPage;
