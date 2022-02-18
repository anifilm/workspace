import React from 'react';
import styles from '../Todo.module.css';
import { Todo } from '../App';

import TodoItem from './TodoItem';

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
