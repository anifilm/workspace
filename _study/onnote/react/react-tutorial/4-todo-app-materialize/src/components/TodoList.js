import React from 'react';
import TodoItem from './TodoItem';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const TodoList = ({ todos, onToggle, onEdit, onRemove }) => {
  return (
    <div>
      {todos.map((todo) => {
        return (
          <TodoItem
            key={todo.id}
            todo={todo}
            onToggle={onToggle}
            onEdit={onEdit}
            onRemove={onRemove}
          />
        );
      })}
    </div>
  );
};

export default TodoList;
