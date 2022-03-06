import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import ItemModifyForm from 'components/item/ItemModifyForm';
import { FETCH_ONE, fetchOne } from 'modules/item';
import { modifyItem } from 'lib/api';

// match, history 객체를 전달받음
const ItemModifyContainer = ({ itemId, history }) => {
  // 스토어 상태 조회
  const { item, isLoading } = useSelector(({ item, loading }) => ({
    item: item.item,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 상품 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(itemId));
  }, [dispatch, itemId]);

  // 수정 처리 함수 정의
  const onModify = async (itemId, itemName, price, description, file, previewFile) => {
    try {
      const itemObject = {
        itemId,
        itemName,
        price,
        description,
      };

      const formData = new FormData();
      formData.append('file', file);
      formData.append('file2', previewFile);
      formData.append('item', JSON.stringify(itemObject));

      await modifyItem(itemId, formData);

      alert('수정이 완료되었습니다.');
      history.push(`/item/read/${itemId}`);
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else if (err.response.status === 401) {
        alert('로그인이 필요합니다.');
        history.push('/signin');
      } else if (err.response.status === 403) {
        alert('접근 권한이 없습니다.');
        history.goBack();
      } else {
        alert(err.response.data.message);
      }
    }
  }

  // ItemModifyForm 컴포넌트 표시
  return (
    <ItemModifyForm
      item={item}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(ItemModifyContainer);
