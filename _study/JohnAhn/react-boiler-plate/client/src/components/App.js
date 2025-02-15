import React, { Suspense } from 'react';
import { Route, Switch } from 'react-router-dom';
import Auth from '../hoc/auth';

import NavBar from './views/NavBar/NavBar';
import LandingPage from './views/LandingPage/LandingPage.js';
import RegisterPage from './views/RegisterPage/RegisterPage.js';
import LoginPage from './views/LoginPage/LoginPage.js';
import Footer from './views/Footer/Footer';

const App = () => {
  return (
    <Suspense fallback={<div>Loading...</div>}>
      <NavBar />
      <div style={{ paddingTop: '69px', minHeight: 'calc(100vh - 80px)' }}>
        <Switch>
          <Route exact path="/" component={Auth(LandingPage, null)} />
          <Route exact path="/register" component={Auth(RegisterPage, false)} />
          <Route exact path="/login" component={Auth(LoginPage, false)} />
        </Switch>
      </div>
      <Footer />
    </Suspense>
  );
};

export default App;
