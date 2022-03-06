import React from 'react';

import MainLayout from 'layout/MainLayout';
import ItemRegisterContainer from 'containers/item/ItemRegisterContainer';

const ItemRegisterPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <ItemRegisterContainer />
    </MainLayout>
  );
};

export default ItemRegisterPage;
