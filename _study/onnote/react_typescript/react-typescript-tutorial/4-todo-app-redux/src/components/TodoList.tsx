import React, { useContext } from 'react';
import styles from '../Todo.module.css';

import TodoContext from '../contexts/todo';
import TodoItem from './TodoItem';

const TodoList = () => {
  const { state, actions } = useContext(TodoContext);

  return (
    <div className={styles.list}>
      {state.todos.map((todo) => (
        <TodoItem
          todo={todo}
          key={todo.id}
          onToggle={actions.onToggle}
          onRemove={actions.onRemove}
        />
      ))}
    </div>
  );
};

export default TodoList;
