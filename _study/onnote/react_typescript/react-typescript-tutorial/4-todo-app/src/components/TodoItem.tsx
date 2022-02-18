import React from 'react';
import styles from '../Todo.module.css';
import { Todo } from '../App';

interface Props {
  readonly todo: Todo;
  readonly onToggle: (id: number) => void;
  readonly onRemove: (id: number) => void;
}

const TodoItem = ({ todo, onToggle, onRemove }: Props) => {
  const { id, text, done } = todo;

  return (
    <div className={styles.item}>
      <input type="checkbox" checked={done} onChange={() => onToggle(id)} />
      <span>{todo.text}</span>
      <button onClick={() => onRemove(id)}>삭제</button>
    </div>
  );
};

export default TodoItem;
