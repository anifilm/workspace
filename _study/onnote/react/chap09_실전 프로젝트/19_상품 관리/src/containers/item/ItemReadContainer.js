import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import ItemRead from 'components/item/ItemRead';
import { FETCH_ONE, fetchOne } from 'modules/item';
import { removeItem } from 'lib/api';
import { isAdmin as hasRoleAdmin } from 'modules/selector';

// match 객체의 params 값을 참조
const ItemReadContainer = ({ itemId, history }) => {
  // 스토어 상태 조회
  const { item, isAdmin, isLoading } = useSelector((state) => ({
    item: state.item.item,
    isAdmin: hasRoleAdmin(state),
    isLoading: state.loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 상품 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(itemId));
  }, [dispatch, itemId]);

  // 삭제 처리 함수 정의
  const onRemove = async () => {
    try {
      await removeItem(itemId);
      alert('삭제가 완료되었습니다.');
      history.push('/item');
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
  };

  // ItemRead 컴포넌트 표시
  return (
    <ItemRead
      itemId={itemId}
      item={item}
      isAdmin={isAdmin}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

export default withRouter(ItemReadContainer);
