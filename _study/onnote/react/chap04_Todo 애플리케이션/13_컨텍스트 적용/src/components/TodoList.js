import React from 'react';
import styles from '../Todo.module.css';

import { TodoConsumer } from '../contexts/todo';
import TodoItem from './TodoItem';

const TodoList = () => {
  return (
    <TodoConsumer>
      {(value) => (
        <div className={styles.list}>
          {value.state.todos.map((todo) => (
            <TodoItem
              todo={todo}
              key={todo.id}
              onToggle={value.actions.onToggle}
              onRemove={value.actions.onRemove}
            />
          ))}
        </div>
      )}
    </TodoConsumer>
  );
};

export default TodoList;
