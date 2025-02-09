import React, { useEffect } from 'react';
import { withRouter } from 'react-router';
import { useDispatch, useSelector } from 'react-redux';

import SignInForm from 'components/auth/SignInForm';
import { login } from 'modules/auth';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const SignInContainer = ({ history }) => {
  // 스토어 상태 조회
  const { accessToken } = useSelector(({ auth }) => ({
    accessToken: auth.accessToken,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 로그인 처리
  const onSignIn = (userId, userPw) => {
    try {
      dispatch(login({ userId, userPw }));
    } catch (err) {
      console.log(err);
    }
  };

  // 마운트될 때 액세스 토큰 상태 정보 확인
  useEffect(() => {
    if (accessToken) {
      alert('로그인 되었습니다.');
      history.push('/');
    }
  }, [accessToken, dispatch, history]);

  // 로그인 폼 컴포넌트 표시
  return <SignInForm onSignIn={onSignIn} />;
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(SignInContainer);
