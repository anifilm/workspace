import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import SignInPage from 'pages/auth/SignInPage';

function App() {
  return (
    <>
      <Route path="/" component={HomePage} exact />
      <Route path="/signin" component={SignInPage} exact />
    </>
  );
}

export default App;
