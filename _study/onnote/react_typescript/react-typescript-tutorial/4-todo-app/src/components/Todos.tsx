import React from 'react';

import TodoFooter from './TodoFooter';
import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';

const Todos = () => {
  return (
    <div>
      <TodoHeader />
      <TodoInput />
      <TodoList />
      <TodoFooter />
    </div>
  );
};

export default Todos;
