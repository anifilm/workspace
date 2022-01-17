import React, { useState, useEffect } from 'react';

const Hello = () => {
  /*useEffect(() => {
    console.log('created :)');
    return () => {
      console.log('destroyed :(');
    };
  }, []);*/
  const destroyedFunc = () => {
    console.log('destroyed :(');
  }
  const effectFunc = () => {
    console.log('created :)');
    return destroyedFunc;
  };
  useEffect(effectFunc, []);

  return <h1>Hello</h1>;
};

const App = () => {
  const [showing, setShowing] = useState(false);

  const onClickHandler = () => {
    setShowing((prev) => !prev);
  }

  return (
    <div>
      <button onClick={onClickHandler}>{showing ? 'Hide': 'Show'}</button>
      {showing && <Hello />}
    </div>
  );
};

export default App;
