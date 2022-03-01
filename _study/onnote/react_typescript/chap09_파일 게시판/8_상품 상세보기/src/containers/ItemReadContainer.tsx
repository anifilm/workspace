import React, { useEffect } from 'react';
import { RouteComponentProps } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  FETCH_ITEM,
  fetchItem,
} from '../modules/item';
import { RootState } from '../modules';

import ItemRead from '../components/ItemRead';

interface MatchParams {
  itemId: string;
}

const ItemReadContainer = ({ match }: RouteComponentProps<MatchParams>) => {
  const { itemId } = match.params;

  // 스토어 상태 조회
  const { item, isLoading } = useSelector(({ item, loading }: RootState) => ({
    item: item.item,
    isLoading: loading[FETCH_ITEM],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch(fetchItem(itemId));
  }, [dispatch, itemId]);

  return <ItemRead itemId={itemId} item={item} isLoading={isLoading} />;
};

export default ItemReadContainer;
