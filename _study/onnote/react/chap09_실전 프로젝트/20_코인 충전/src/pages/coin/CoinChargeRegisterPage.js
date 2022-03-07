import React from 'react';

import MainLayout from 'layout/MainLayout';
import CoinChargeRegisterContainer from 'containers/coin/CoinChargeRegisterContainer';

const CoinChargeRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <CoinChargeRegisterContainer />
    </MainLayout>
  );
};

export default CoinChargeRegisterPage;
