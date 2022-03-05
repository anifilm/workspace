import React from 'react';
import { withRouter } from 'react-router';

import SignUpForm from 'components/auth/SignUpForm';
import { signUp } from 'lib/api';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const SignUpContainer = ({ history }) => {
  // 등록 처리
  const onSignUp = async (userId, userPw, userName, job) => {
    try {
      await signUp(userId, userPw, userName, job);
      alert('회원가입이 완료되었습니다.');
      history.push('/signin');
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else {
        alert(err.response.data.message);
      }
    }
  };

  // 회원가입 폼 컴포넌트 표시
  return <SignUpForm onSignUp={onSignUp} />;
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(SignUpContainer);
