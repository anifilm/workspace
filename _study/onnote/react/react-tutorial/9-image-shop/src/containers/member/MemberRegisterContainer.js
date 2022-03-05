import React from 'react';
import { withRouter } from 'react-router-dom';

import MemberRegisterForm from 'components/member/MemberRegisterForm';
import { writeMember } from 'lib/api';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const MemberRegisterContainer = ({ history }) => {
  // 등록 처리
  const onRegister = async (userNo, userPw, userName, job) => {
    try {
      const response = await writeMember(userNo, userPw, userName, job);
      alert('등록이 완료되었습니다.');
      history.push(`/member/read/${response.data.userNo}`);
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

  return <MemberRegisterForm onRegister={onRegister} />;
};

export default withRouter(MemberRegisterContainer);
