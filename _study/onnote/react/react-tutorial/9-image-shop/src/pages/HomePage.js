import React from 'react';

import MainLayout from 'layout/MainLayout';
import Home from 'components/Home';

const HomePage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <Home />
    </MainLayout>
  );
}

export default HomePage;
