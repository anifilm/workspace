import React, { useState, useRef, useCallback } from 'react';

import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';
import TodoFooter from './TodoFooter';

const Todos = () => {
  const [todos, setTodos] = useState([
    {
      id: 1,
      text: 'todoItem1',
      done: true,
    },
    {
      id: 2,
      text: 'todoItem2',
      done: false,
    },
    {
      id: 3,
      text: 'todoItem3',
      done: false,
    },
  ]);

  const nextId = useRef(4);

  const onInsert = useCallback((text) => {
    const todo = {
      id: nextId.current,
      text,
      done: false,
    };
    setTodos((todos) => todos.concat(todo));
    nextId.current += 1;
  }, []);
  const onToggle = useCallback((id) => {
    setTodos((todos) =>
      todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      ),
    );
  }, []);
  const onRemove = useCallback((id) => {
    setTodos((todos) => todos.filter((todo) => todo.id !== id));
  }, []);
  const onClearAll = useCallback(() => {
    // 완료된 항목만 삭제하도록 수정
    setTodos((todos) => todos.filter((todo) => !todo.done));
  }, []);

  return (
    <div>
      <TodoHeader />
      <TodoInput onInsert={onInsert} />
      <TodoList todos={todos} onToggle={onToggle} onRemove={onRemove} />
      <TodoFooter onClearAll={onClearAll} />
    </div>
  );
};

export default Todos;
