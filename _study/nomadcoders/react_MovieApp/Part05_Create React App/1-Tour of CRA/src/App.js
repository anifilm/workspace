import React from 'react';
import styles from './App.module.css';

import Button from './components/Button';

const App = () => {
  return (
    <div>
      <h1 className={styles.title}>Hello, React!</h1>
      <Button label={'click'} />
    </div>
  );
};

export default App;
