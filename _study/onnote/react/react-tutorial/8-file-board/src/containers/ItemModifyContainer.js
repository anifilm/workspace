import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  FETCH_ITEM,
  fetchItem,
} from '../modules/item';
import axios from 'axios';

import ItemModifyForm from '../components/ItemModifyForm';

const ItemModifyContainer = ({ match, history }) => {
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

  // 수정 처리
  const onModify = (itemName, price, description, file) => {
    const itemObject = {
      itemId,
      itemName,
      price,
      description,
    };

    const formData = new FormData();
    formData.append('file', file);
    formData.append('item', JSON.stringify(itemObject));

    axios
      .put('/items', formData, {
        headers: { 'Content-Type': 'multipart/form-data' },
      })
      .then((res) => {
        alert('수정되었습니다.');
        history.push('/read/' + itemId);
      })
      .catch((err) => {
        alert(err.response.data.msg);
      });
  };

  return (
    <ItemModifyForm item={item} isLoading={isLoading} onModify={onModify} />
  );
};

export default withRouter(ItemModifyContainer);
