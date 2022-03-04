import React from 'react';
import { withRouter } from 'react-router';

import AdminSetupForm from 'components/member/AdminSetupForm';
import { adminSetup } from 'lib/api';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const AdminSetupContainer = ({ history }) => {
  // 등록 처리
  const onRegister = async (userId, userPw, userName) => {
    try {
      await adminSetup(userId, userPw, userName);
      alert('등록이 완료되었습니다.');
      history.push('/');
    } catch (err) {
      alert(err.response.data);
    }
  };

  // 최초관리자 등록 폼 컴포넌트 표시
  return (
    <AdminSetupForm onRegister={onRegister} />
  );
}

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(AdminSetupContainer);
