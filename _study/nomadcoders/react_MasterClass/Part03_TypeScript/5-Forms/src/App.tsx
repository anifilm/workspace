import React, { useState } from 'react';

const App = () => {
  const [value, setValue] = useState('');

  const onChange = (event: React.FormEvent<HTMLInputElement>) => {
    const { value } = event.currentTarget;
    setValue(value);
  };
  const onSubmit = (event: React.FormEvent<HTMLFormElement>) => {
    event.preventDefault();
    console.log('hello', value);
  };

  return (
    <div>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          value={value}
          onChange={onChange}
          placeholder="username"
        />
        <button>Login</button>
      </form>
    </div>
  );
};

export default App;
