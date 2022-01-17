import React, { useState } from 'react';

const App = () => {
  const [todo, setTodo] = useState('');
  const [todos, setTodos] = useState([]);

  const onChange = (event) => {
    setTodo(event.target.value);
  };
  const onSubmit = (event) => {
    event.preventDefault();
    if (todo.trim() === '') return;
    setTodos((currentArray) => {
      return [todo.trim(), ...currentArray];
    });
    setTodo('');
  };

  return (
    <div>
      <h1>My To Do ({todos.length})</h1>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          value={todo}
          onChange={onChange}
          placeholder="Write your to do..."
        />
        <button>Add To Do</button>
      </form>
    </div>
  );
};

export default App;
