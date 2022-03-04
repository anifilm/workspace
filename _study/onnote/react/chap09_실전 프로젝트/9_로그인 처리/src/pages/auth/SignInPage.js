import React from 'react';

import SignLayout from 'layout/SignLayout';
import SignInContainer from 'containers/auth/SignInContainer';

// 로그인 페이지
const SignInPage = () => {
  return (
    <SignLayout>
      <SignInContainer />
    </SignLayout>
  );
};

export default SignInPage;
