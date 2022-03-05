import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import AdminSetupPage from 'pages/member/AdminSetupPage';
import SignInPage from 'pages/auth/SignInPage';

function App() {
  return (
    <>
      <Route path="/" component={HomePage} exact />
      <Route path="/member/setup" component={AdminSetupPage} />
      <Route path="/signin" component={SignInPage} exact />
    </>
  );
}

export default App;
