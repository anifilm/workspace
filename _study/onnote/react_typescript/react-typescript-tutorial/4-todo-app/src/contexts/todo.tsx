import React, { createContext, useState, useCallback, useRef } from 'react';
import { Todo } from '../App';

interface TodoState {
  readonly todos: Todo[];
  readonly input: string;
}

interface TodoAction {
  readonly setTodos: (todos: Todo[]) => void;
  readonly onInsert: (text: string) => void;
  readonly onToggle: (id: number) => void;
  readonly onRemove: (id: number) => void;
  readonly onClearAll: () => void;
  readonly onChange: (e: React.ChangeEvent<HTMLInputElement>) => void;
  readonly onSubmit: (e: React.FormEvent<HTMLFormElement>) => void;
}

interface Context {
  readonly state: TodoState;
  readonly actions: TodoAction;
}

const TodoContext = createContext<Context>({
  state: {
    todos: [],
    input: '',
  },
  actions: {
    setTodos: (todos: Todo[]): void => {},
    onInsert: (text: string): void => {},
    onToggle: (id: number): void => {},
    onRemove: (id: number): void => {},
    onClearAll: (): void => {},
    onChange: (e: React.ChangeEvent<HTMLInputElement>): void => {},
    onSubmit: (e: React.FormEvent<HTMLFormElement>): void => {},
  },
});

interface Props {
  children: JSX.Element | JSX.Element[];
}

const TodoProvider = ({ children }: Props) => {
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
  const onSubmit = useCallback(
    (e: React.FormEvent<HTMLFormElement>) => {
      e.preventDefault();
      onInsert(input);
      setInput('');
    },
    [onInsert, input],
  );

  const value = {
    state: { todos, input },
    actions: {
      setTodos,
      onInsert,
      onToggle,
      onRemove,
      onClearAll,
      onChange,
      onSubmit,
    },
  };

  return <TodoContext.Provider value={value}>{children}</TodoContext.Provider>;
};

const { Consumer: TodoConsumer } = TodoContext;

export { TodoProvider, TodoConsumer };

export default TodoContext;
