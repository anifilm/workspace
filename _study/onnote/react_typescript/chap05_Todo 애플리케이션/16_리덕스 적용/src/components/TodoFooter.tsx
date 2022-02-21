import React from 'react';
import styles from '../Todo.module.css';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly onClearAll: () => void;
}

const TodoFooter = ({ onClearAll }: Props) => {
  return (
    <div className={styles.footer}>
      <button onClick={onClearAll}>완료 항목 삭제</button>
    </div>
  );
};

export default TodoFooter;
