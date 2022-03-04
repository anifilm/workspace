import React from 'react';

import SignLayout from 'layout/SignLayout';
import SignInForm from 'components/auth/SignInForm';

const SignInPage = () => {
  return (
    <SignLayout>
      <SignInForm />
    </SignLayout>
  );
};

export default SignInPage;
