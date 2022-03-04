import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import CodeDetailList from 'components/codedetail/CodeDetailList';
import { FETCH_LIST, fetchList } from 'modules/codedetail';

const CodeDetailListContainer = () => {
  // 스토어 상태 조회
  const { codeDetails, isLoading } = useSelector(({ codedetail, loading }) => ({
    codeDetails: codedetail.codeDetails,
    isLoading: loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 코드그룹 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // 코드그룹 목록 컴포넌트 표시
  return <CodeDetailList codeDetails={codeDetails} isLoading={isLoading} />;
};

export default CodeDetailListContainer;
