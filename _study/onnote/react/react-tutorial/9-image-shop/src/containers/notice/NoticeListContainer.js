import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import NoticeList from 'components/notice/NoticeList';
import { FETCH_LIST, fetchList } from 'modules/notice';
import { isAdmin as hasRoleAdmin } from 'modules/selector';

const NoticeListContainer = () => {
  // 스토어 상태 조회
  const { notices, isAdmin, isLoading } = useSelector((state) => ({
    notices: state.notice.notices,
    isAdmin: hasRoleAdmin(state),
    isLoading: state.loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 공지사항 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // NoticeList 컴포넌트 표시
  return <NoticeList notices={notices} isAdmin={isAdmin} isLoading={isLoading} />;
};

export default NoticeListContainer;
