import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  FETCH_ITEM_LIST,
  fetchItemList,
} from '../modules/item';

import ItemList from '../components/ItemList';

const ItemListContainer = () => {
  // 스토어 상태 조회
  const { items, isLoading } = useSelector(({ item, loading }) => ({
    items: item.items,
    isLoading: loading[FETCH_ITEM_LIST],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch(fetchItemList());
  }, [dispatch]);

  return <ItemList items={items} isLoading={isLoading} />;
};

export default ItemListContainer;
