import React, { useEffect } from 'react';
import { withRouter } from 'react-router';
import { useDispatch, useSelector } from 'react-redux';

import SignInForm from 'components/auth/SignInForm';
import { login, checkUserInfo } from 'modules/auth';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const SignInContainer = ({ history }) => {
  // 스토어 상태 조회
  const { accessToken, userInfo } = useSelector(({ auth }) => ({
    accessToken: auth.accessToken,
    userInfo: auth.userInfo,
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

  // checkUserInfo 액션 디스패치
  useEffect(() => {
    if (accessToken) {
      dispatch(checkUserInfo());
    }
  }, [accessToken, dispatch]);
  // 마운트될 때 사용자정보 확인
  useEffect(() => {
    if (userInfo) {
      alert('로그인 되었습니다.');
      history.push('/');
    }
  }, [userInfo, history]);

  // 로그인 폼 컴포넌트 표시
  return <SignInForm onSignIn={onSignIn} />;
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(SignInContainer);
