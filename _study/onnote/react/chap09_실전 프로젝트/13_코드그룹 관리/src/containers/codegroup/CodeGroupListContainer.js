import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import CodeGroupList from 'components/codegroup/CodeGroupList';
import { FETCH_LIST, fetchList } from 'modules/codegroup';

const CodeGroupListContainer = () => {
  // 스토어 상태 조회
  const { codeGroups, isLoading } = useSelector(({ codegroup, loading }) => ({
    codeGroups: codegroup.codeGroups,
    isLoading: loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 코드그룹 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // 코드그룹 목록 컴포넌트 표시
  return <CodeGroupList codeGroups={codeGroups} isLoading={isLoading} />;
};

export default CodeGroupListContainer;
