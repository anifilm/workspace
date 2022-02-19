import React from 'react';

import { TodoProvider } from '../contexts/todo';

import TodoFooter from './TodoFooter';
import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';

const Todos = () => {
  return (
    <TodoProvider>
      <TodoHeader />
      <TodoInput />
      <TodoList />
      <TodoFooter />
    </TodoProvider>
  );
};

export default Todos;
