import React from 'react';

import MainLayout from 'layout/MainLayout';
import CoinChargeListContainer from 'containers/coin/CoinChargeListContainer';

const CoinChargeListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CoinChargeListContainer />
    </MainLayout>
  );
};

export default CoinChargeListPage;
