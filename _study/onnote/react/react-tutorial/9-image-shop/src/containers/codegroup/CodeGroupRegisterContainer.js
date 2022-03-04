import React from 'react';
import { withRouter } from 'react-router-dom';

import CodeGroupRegisterForm from 'components/codegroup/CodeGroupRegisterForm';
import { writeCodeGroup } from 'lib/api';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const CodeGroupRegisterContainer = ({ history }) => {
  // 등록 처리
  const onRegister = async (groupCode, groupName) => {
    try {
      const response = await writeCodeGroup(groupCode, groupName);
      alert('등록이 완료되었습니다.');
      history.push(`/codegroup/read/${response.data.groupCode}`);
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

  return <CodeGroupRegisterForm onRegister={onRegister} />;
};

export default withRouter(CodeGroupRegisterContainer);
