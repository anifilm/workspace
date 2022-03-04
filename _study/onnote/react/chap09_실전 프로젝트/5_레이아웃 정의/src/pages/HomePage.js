import React from 'react';

import Home from 'components/Home';
import MainLayout from 'layout/MainLayout';

const HomePage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <Home />
    </MainLayout>
  );
}

export default HomePage;
