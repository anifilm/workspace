import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import MemberList from 'components/member/MemberList';
import { FETCH_LIST, fetchList } from 'modules/member';

const MemberListContainer = () => {
  // 스토어 상태 조회
  const { members, isLoading } = useSelector(({ member, loading }) => ({
    members: member.members,
    isLoading: loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 회원 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // 회원 목록 컴포넌트 표시
  return <MemberList members={members} isLoading={isLoading} />;
};

export default MemberListContainer;
