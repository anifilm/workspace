import React from 'react';
import { connect } from 'react-redux';
// 액션 생성 함수 임포트
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
} from '../modules/todos';
// 상태 인터페이스 임포트
import { TodoState } from '../modules/todos';
// Todos 컴포넌트 임포트
import Todos from '../components/Todos';

// 타입스크립트 인터페이스 임포트
import { Todo } from '../App';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly input: string;
  readonly todos: Todo[];
  readonly changeTodoInput: (input: string) => void;
  readonly addTodo: (input: string) => void;
  readonly toggleTodoStatus: (id: number) => void;
  readonly removeTodo: (id: number) => void;
  readonly clearAllTodos: () => void;
}

// connect 함수에 의해 상태와 스토어 상태 변경 함수를 props로 전달받음
const TodosContainer = ({
  input,
  todos,
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
}: Props) => {
  return (
    <Todos
      input={input}
      todos={todos}
      onChangeInput={changeTodoInput}
      onInsert={addTodo}
      onToggle={toggleTodoStatus}
      onRemove={removeTodo}
      onClearAll={clearAllTodos}
    />
  );
};

// 객체 형태 처리
export default connect(
  (state: TodoState) => ({
    input: state.input,
    todos: state.todos,
  }),
  {
    changeTodoInput,
    addTodo,
    toggleTodoStatus,
    removeTodo,
    clearAllTodos,
  },
)(TodosContainer);
