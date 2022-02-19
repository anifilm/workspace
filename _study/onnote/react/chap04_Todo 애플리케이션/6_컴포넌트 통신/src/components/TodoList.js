import React from 'react';
import styles from '../Todo.module.css';

import TodoItem from './TodoItem';

const TodoList = ({ todos }) => {
  return (
    <div className={styles.list}>
      {todos.map((todo) => (
        <TodoItem todo={todo} key={todo.id} />
      ))}
    </div>
  );
};

export default TodoList;
