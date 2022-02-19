import React, { useState } from 'react';

import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';
import TodoFooter from './TodoFooter';

const Todos = () => {
  const [todos, setTodos] = useState([
    {
      id: 1,
      text: 'todoItem1',
      done: true,
    },
    {
      id: 2,
      text: 'todoItem2',
      done: false,
    },
    {
      id: 3,
      text: 'todoItem3',
      done: false,
    },
  ]);

  return (
    <div>
      <TodoHeader />
      <TodoInput />
      <TodoList todos={todos} />
      <TodoFooter />
    </div>
  );
};

export default Todos;
