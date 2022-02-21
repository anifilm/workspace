import React from 'react';
import { useSelector } from 'react-redux';
import { TodoState } from '../modules/todos';
import styles from '../Todo.module.css';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly onClearAll: () => void;
}

const TodoFooter = ({ onClearAll }: Props) => {
  // 스토어 상태 조회
  const { todos, nextTodoId } = useSelector((state: TodoState) => ({
    todos: state.todos,
    nextTodoId: state.nextTodoId,
  }));
  // 저장할 데이터 객체 생성
  const data = { todos, nextTodoId };
  // 애플리케이션 데이터 저장
  const onSave = () => {
    localStorage.setItem('react-todo-app-data', JSON.stringify(data));
  };

  return (
    <div className={styles.footer}>
      <button onClick={onClearAll}>완료 항목 삭제</button>
      <button onClick={onSave}>저장</button>
    </div>
  );
};

export default TodoFooter;
