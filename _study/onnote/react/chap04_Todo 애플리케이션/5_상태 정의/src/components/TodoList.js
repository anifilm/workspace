import React, { useState } from 'react';
import styles from '../Todo.module.css';

import TodoItem from './TodoItem';

const TodoList = () => {
  const [todos, setTodos] = useState(['todoItems1', 'todoItem2', 'todoItem3']);

  return (
    <div className={styles.list}>
      {todos.map((todo) => (
        <TodoItem />
      ))}
    </div>
  );
};

export default TodoList;
