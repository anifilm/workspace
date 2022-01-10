import React from 'react';
import { firebaseInstance, authService } from '../config/firebase-config';

import AuthForm from '../components/AuthForm';

const Auth = () => {
  const onSocialClick = async (event) => {
    const { name } = event.target;
    let provider;
    if (name === 'google') {
      provider = new firebaseInstance.auth.GoogleAuthProvider();
    } else if (name === 'github') {
      provider = new firebaseInstance.auth.GithubAuthProvider();
    }
    await authService.signInWithPopup(provider);
    //const data = await authService.signInWithPopup(provider);
    //console.log(data);
  };

  return (
    <>
      <AuthForm />
      <div>
        <button onClick={onSocialClick} name="google">
          Continue with Google
        </button>
        <button onClick={onSocialClick} name="github">
          Continue with GitHub
        </button>
      </div>
    </>
  );
};

export default Auth;
