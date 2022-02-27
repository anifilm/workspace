import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  FETCH_ITEM,
  fetchItem,
} from '../modules/item';
import { removeItemApi } from '../lib/api';

import ItemRead from '../components/ItemRead';

const ItemReadContainer = ({ match, history }) => {
  const { itemId } = match.params;

  // 스토어 상태 조회
  const { item, isLoading } = useSelector(({ item, loading }) => ({
    item: item.item,
    isLoading: loading[FETCH_ITEM],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch(fetchItem(itemId));
  }, [dispatch, itemId]);

  // 삭제 처리
  const onRemove = async () => {
    try {
      await removeItemApi(itemId);
      alert('삭제되었습니다.');
      history.push('/');
    } catch (err) {
      console.log(err);
    }
  }

  return (
    <ItemRead
      itemId={itemId}
      item={item}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

export default withRouter(ItemReadContainer);
