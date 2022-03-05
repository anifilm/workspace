import React from 'react';

import MainLayout from 'layout/MainLayout';
import BoardRegisterContainer from 'containers/board/BoardRegisterContainer';

const BoardRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <BoardRegisterContainer />
    </MainLayout>
  );
};

export default BoardRegisterPage;
