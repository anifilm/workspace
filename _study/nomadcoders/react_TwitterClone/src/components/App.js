import React, { useState, useEffect } from 'react';
import { authService } from '../config/firebase-config';

import AppRouter from 'components/Router';

const App = () => {
  const [init, setInit] = useState(false);
  const [userObj, setUserObj] = useState(null);

  useEffect(() => {
    authService.onAuthStateChanged((user) => {
      if (user) {
        setUserObj(user);
      }
      setInit(true);
    });
  }, []);

  return (
    <>
      {init ? <AppRouter isLoggedIn={Boolean(userObj)} userObj={userObj} /> : 'Initializing...'}
      <br />
      <footer>&copy; {new Date().getFullYear()} Twitter. (clone app)</footer>
    </>
  );
};

export default App;
