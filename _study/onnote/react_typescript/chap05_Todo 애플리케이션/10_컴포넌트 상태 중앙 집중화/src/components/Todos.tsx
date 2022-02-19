import React, { useState, useRef, useCallback } from 'react';
import { Todo } from '../App';

import TodoFooter from './TodoFooter';
import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';

const Todos = () => {
  const [todos, setTodos] = useState<Todo[]>([]);
  const [input, setInput] = useState('');

  const nextId = useRef(1);

  const onInsert = useCallback((text: string) => {
    const todo = {
      id: nextId.current,
      text,
      done: false,
    };
    setTodos((todos) => todos.concat(todo));
    nextId.current += 1;
  }, []);
  const onToggle = useCallback((id: number) => {
    setTodos((todos) =>
      todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      ),
    );
  }, []);
  const onRemove = useCallback((id: number) => {
    setTodos((todos) => todos.filter((todo) => todo.id !== id));
  }, []);
  const onClearAll = useCallback(() => {
    // 완료된 항목만 삭제하도록 수정
    setTodos((todos) => todos.filter((todo) => !todo.done));
  }, []);

  const onChange = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    setInput(e.target.value);
  }, []);
  const onSubmit = useCallback((e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    onInsert(input);
    setInput('');
  }, [onInsert, input]);

  return (
    <div>
      <TodoHeader />
      <TodoInput input={input} onChange={onChange} onSubmit={onSubmit} />
      <TodoList todos={todos} onToggle={onToggle} onRemove={onRemove} />
      <TodoFooter onClearAll={onClearAll} />
    </div>
  );
};

export default Todos;
