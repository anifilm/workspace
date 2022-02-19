import React from 'react';
import styles from '../Todo.module.css';

import { TodoConsumer } from '../contexts/todo';
import TodoItem from './TodoItem';

const TodoList = () => {
  return (
    <TodoConsumer>
      {({ state, actions }) => (
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
      )}
    </TodoConsumer>
  );
};

export default TodoList;
