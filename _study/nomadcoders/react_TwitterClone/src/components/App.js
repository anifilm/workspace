import React, { useState, useEffect } from 'react';
import AppRouter from 'components/Router';
import { authService } from '../config/firebase-config';

const App = () => {
  const [init, setInit] = useState(false);
  const [isLoggedIn, setIsLoggedIn] = useState(false);
  const [userObj, setUserObj] = useState(null);

  useEffect(() => {
    authService.onAuthStateChanged((user) => {
      if (user) {
        setIsLoggedIn(true);
        setUserObj(user);
      } else {
        setIsLoggedIn(false);
      }
      setInit(true);
    });
  }, []);

  return (
    <>
      {init ? <AppRouter isLoggedIn={isLoggedIn} userObj={userObj} /> : 'Initializing...'}
      <footer>&copy; {new Date().getFullYear()} Twitter. (clone app)</footer>
    </>
  );
};

export default App;
