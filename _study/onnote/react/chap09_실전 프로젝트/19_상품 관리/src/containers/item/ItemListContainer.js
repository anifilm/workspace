import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import ItemList from 'components/item/ItemList';
import { FETCH_LIST, fetchList } from 'modules/item';
import { isAdmin as hasRoleAdmin } from 'modules/selector';

const ItemListContainer = () => {
  // 스토어 상태 조회
  const { items, isAdmin, isLoading } = useSelector((state) => ({
    items: state.item.items,
    isAdmin: hasRoleAdmin(state),
    isLoading: state.loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 상품 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // ItemList 컴포넌트 표시
  return (
    <ItemList
      items={items}
      isAdmin={isAdmin}
      isLoading={isLoading}
    />
  );
};

export default ItemListContainer;
