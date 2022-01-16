import React, { useState, useEffect } from 'react';

const App = () => {
  const [counter, setCounter] = useState(0);
  const [keyword, setKeyword] = useState('');

  const onChangeHandler = (event) => {
    setKeyword(event.target.value);
  }
  const onClickHandler = () => {
    setCounter((prev) => prev + 1);
  };
  console.log('I run all the time');

  useEffect(() => {
    console.log('CALL THE API...');
  }, []);
  useEffect(() => {
    console.log('SEARCH FOR', keyword);
  }, [keyword]);

  return (
    <div>
      <input
        type="text"
        value={keyword}
        onChange={onChangeHandler}
        placeholder="Search here..."
      />
      <h3>Total clicks: {counter}</h3>
      <button onClick={onClickHandler}>Click me</button>
    </div>
  );
};

export default App;
