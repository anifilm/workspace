import React from 'react';
import styles from '../Todo.module.css';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const TodoFooter = ({ onClearAll }) => {
  return (
    <div className={styles.footer}>
      <button onClick={onClearAll}>완료 항목 삭제</button>
    </div>
  );
};

export default TodoFooter;
