import React from 'react';

import styles from '../Todo.module.css';

const TodoItem = ({ todo }) => {
  return (
    <div className={styles.item}>
      <input type="checkbox" />
      <span>{todo.text}</span>
      <button>삭제</button>
    </div>
  );
};

export default TodoItem;
