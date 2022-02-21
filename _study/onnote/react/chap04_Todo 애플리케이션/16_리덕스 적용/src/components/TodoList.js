import React from 'react';
import styles from '../Todo.module.css';

import TodoItem from './TodoItem';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const TodoList = ({ todos, onToggle, onRemove }) => {
  return (
    <div className={styles.list}>
      {todos.map((todo) => (
        <TodoItem
          todo={todo}
          key={todo.id}
          onToggle={onToggle}
          onRemove={onRemove}
        />
      ))}
    </div>
  );
};

export default TodoList;
