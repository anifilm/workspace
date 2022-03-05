import React from 'react';

import SignLayout from 'layout/SignLayout';
import SignUpContainer from 'containers/auth/SignUpContainer';

// 로그인 페이지
const SignUpPage = () => {
  return (
    <SignLayout>
      <SignUpContainer />
    </SignLayout>
  );
};

export default SignUpPage;
