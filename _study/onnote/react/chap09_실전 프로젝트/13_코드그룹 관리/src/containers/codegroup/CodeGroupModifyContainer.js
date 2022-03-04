import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { withRouter } from 'react-router-dom';

import CodeGroupModifyForm from 'components/codegroup/CodeGroupModifyForm';
import { FETCH_ONE, fetchOne } from 'modules/codegroup';
import { modifyCodeGroup } from 'lib/api';

// 속성값으로 groupCode와 history를 전달받음
const CodeGroupModifyContainer = ({ groupCode, history }) => {
  // 스토어 상태 조회
  const { codeGroup, isLoading } = useSelector(({ codegroup, loading }) => ({
    codeGroup: codegroup.codeGroup,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 코드그룹 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(groupCode));
  }, [dispatch, groupCode]);

  // 수정 처리
  const onModify = async (groupCode, groupName) => {
    try {
      await modifyCodeGroup(groupCode, groupName);
      alert('수정이 완료되었습니다.');
      history.push(`/codegroup/read/${groupCode}`);
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

  // 코드그룹 수정 폼 컴포넌트 표시
  return (
    <CodeGroupModifyForm
      codeGroup={codeGroup}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(CodeGroupModifyContainer);
