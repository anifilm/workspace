import React, { useContext } from 'react';
import styles from '../Todo.module.css';

import TodoContext from '../contexts/todo';

const TodoFooter = () => {
  const { actions } = useContext(TodoContext);

  return (
    <div className={styles.footer}>
      <button onClick={() => actions.onClearAll()}>완료 항목 삭제</button>
    </div>
  );
};

export default TodoFooter;
