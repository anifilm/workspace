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
  state: { todos: [], input: '' },
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

// props 타입스크립트 인터페이스 정의
interface Props {
  children: JSX.Element | JSX.Element[];
}

// 컨텍스트 공급자 정의
const TodoProvider = ({ children }: Props) => {
  // 상태 정의
  const [todos, setTodos] = useState<Todo[]>([
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
  const [input, setInput] = useState('');
  // 로컬 변수 정의
  const nextId = useRef(4);

  // Todo 항목 추가 이벤트 처리
  const onInsert = useCallback((text: string) => {
    const todo = {
      id: nextId.current,
      text,
      done: false,
    };
    setTodos((todos) => todos.concat(todo));
    nextId.current += 1;
  }, []);
  // 완료 체크 이벤트 처리
  const onToggle = useCallback((id: number) => {
    setTodos((todos) =>
      todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      ),
    );
  }, []);
  // Todo 항목 삭제 이벤트 처리
  const onRemove = useCallback((id: number) => {
    setTodos((todos) => todos.filter((todo) => todo.id !== id));
  }, []);
  // Todo 완료 항목 삭제 이벤트 처리
  const onClearAll = useCallback(() => {
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

  // 상태(state)와 업데이트 함수(actions)를 묶어 value 객체 생성
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

  // value 속성값 설정
  return <TodoContext.Provider value={value}>{children}</TodoContext.Provider>;
};

// TodoContext의 Consumer 속성을 TodoConsumer 변수에 저장
const { Consumer: TodoConsumer } = TodoContext;

// TodoProvider, TodoConsumer 내보내기
export { TodoProvider, TodoConsumer };

  // TodoContext 내보내기
export default TodoContext;
