import React, { useState, useEffect } from 'react';

const App = () => {
  const [counter, setCounter] = useState(0);

  const onClickHandler = () => {
    setCounter((prev) => prev + 1);
  };
  console.log('I run all the time');

  useEffect(() => {
    console.log('CALL THE API...');
  }, []);

  return (
    <div>
      <h3>Total clicks: {counter}</h3>
      <button onClick={onClickHandler}>Click me</button>
    </div>
  );
};

export default App;
