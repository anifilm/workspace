import React from 'react';

import MainLayout from 'layout/MainLayout';
import ItemListContainer from 'containers/item/ItemListContainer';

const ItemListPage = () => {
  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <ItemListContainer />
    </MainLayout>
  );
};

export default ItemListPage;
