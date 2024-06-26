import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import SignInPage from 'pages/auth/SignInPage';

const App = () => {
  return (
    <div>
      <Route path="/" component={HomePage} exact />
      <Route path="/signin" component={SignInPage} exact />
    </div>
  );
}

export default App;
