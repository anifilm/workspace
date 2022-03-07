import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import UserItemRead from 'components/useritem/UserItemRead';
import { FETCH_ONE, fetchOne } from 'modules/useritem';

// match 객체의 params 값을 참조
const UserItemReadContainer = ({ userItemNo }) => {
  // 스토어 상태 조회
  const { userItem, isLoading } = useSelector(({ useritem, loading }) => ({
    userItem: useritem.userItem,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 구매상품 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(userItemNo));
  }, [dispatch, userItemNo]);

  // 구매상품 상세보기 컴포넌트 표시
  return <UserItemRead userItem={userItem} isLoading={isLoading} />;
};

export default UserItemReadContainer;
