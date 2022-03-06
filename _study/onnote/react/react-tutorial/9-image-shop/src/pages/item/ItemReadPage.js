import React from 'react';

import MainLayout from 'layout/MainLayout';
import ItemReadContainer from 'containers/item/ItemReadContainer';

const ItemReadPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { itemId } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <ItemReadContainer itemId={itemId} />
    </MainLayout>
  );
};

export default ItemReadPage;
