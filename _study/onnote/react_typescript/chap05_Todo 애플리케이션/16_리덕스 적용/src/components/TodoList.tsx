import React from 'react';
import styles from '../Todo.module.css';

import TodoItem from './TodoItem';

// 타입스크립트 인터페이스 임포트
import { Todo } from '../App';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly todos: Todo[];
  readonly onToggle: (id: number) => void;
  readonly onRemove: (id: number) => void;
}

const TodoList = ({ todos, onToggle, onRemove }: Props) => {
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
