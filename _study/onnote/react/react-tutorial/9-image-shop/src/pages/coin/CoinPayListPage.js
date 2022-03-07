import React from 'react';

import MainLayout from 'layout/MainLayout';
import CoinPayListContainer from 'containers/coin/CoinPayListContainer';

const CoinPayListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CoinPayListContainer />
    </MainLayout>
  );
};

export default CoinPayListPage;
