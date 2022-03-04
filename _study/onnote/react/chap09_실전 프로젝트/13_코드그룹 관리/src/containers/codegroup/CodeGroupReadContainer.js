import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { withRouter } from 'react-router-dom';

import CodeGroupRead from 'components/codegroup/CodeGroupRead';
import { FETCH_ONE, fetchOne } from 'modules/codegroup';
import { removeCodeGroup } from 'lib/api';

// 속성값으로 groupCode와 history를 전달받음
const CodeGroupReadContainer = ({ groupCode, history }) => {
  // 스토어 상태 조회
  const { codeGroup, isLoading } = useSelector(({ codegroup, loading }) => ({
    codeGroup: codegroup.codeGroup,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 코드그룹 상제정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(groupCode));
  }, [dispatch, groupCode]);

  // 삭제 처리
  const onRemove = async () => {
    try {
      await removeCodeGroup(groupCode);
      alert('삭제가 완료되었습니다.');
      history.push('/codegroup');
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else if (err.response.status === 401) {
        alert('로그인이 필요합니다.');
      } else if (err.response.status === 403) {
        alert('접근 권한이 없습니다.');
      } else {
        alert(err.response.data.message);
      }
    }
  };

  // 코드그룹 상세보기 컴포넌트 표시
  return (
    <CodeGroupRead
      codeGroup={codeGroup}
      groupCode={groupCode}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(CodeGroupReadContainer);
