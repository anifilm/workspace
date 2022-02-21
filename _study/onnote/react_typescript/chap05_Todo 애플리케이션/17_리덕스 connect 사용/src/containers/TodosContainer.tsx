import React from 'react';
import { connect } from 'react-redux';
//import { Dispatch, bindActionCreators } from 'redux';
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

/* 타입스크립트 타입 정의
type PropsState = ReturnType<typeof mapStateToProps>;
type PropsDispatch = ReturnType<typeof mapDispatchToProps>;

// props 타입스크립트 인터페이스 정의
interface Props extends PropsState, PropsDispatch {} */

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

/* 스토어 상태를 props로 맵핑
const mapStateToProps = (state: TodoState) => ({
  input: state.input,
  todos: state.todos,
});

// 스토어 상태 변경 함수를 props로 맵핑
const mapDispatchToProps = (dispatch: Dispatch) => ({
  changeTodoInput: (input: string) => {
    dispatch(changeTodoInput(input));
  },
  addTodo: (input: string) => {
    dispatch(addTodo(input));
  },
  toggleTodoStatus: (id: number) => {
    dispatch(toggleTodoStatus(id));
  },
  removeTodo: (id: number) => {
    dispatch(removeTodo(id));
  },
  clearAllTodos: () => {
    dispatch(clearAllTodos());
  },
});

// 리덕스와 연동된 컴포넌트 반환
export default connect(mapStateToProps, mapDispatchToProps)(TodosContainer); */

/* 익명 함수 처리
export default connect(
  (state: TodoState) => ({
    input: state.input,
    todos: state.todos,
  }),
  (dispatch) => ({
    changeTodoInput: (input: string) => dispatch(changeTodoInput(input)),
    addTodo: (input: string) => dispatch(addTodo(input)),
    toggleTodoStatus: (id: number) => dispatch(toggleTodoStatus(id)),
    removeTodo: (id: number) => dispatch(removeTodo(id)),
    clearAllTodos: () => dispatch(clearAllTodos()),
  }),
)(TodosContainer); */

/* bindActionCreator 유틸 함수 사용
export default connect(
  (state: TodoState) => ({
    input: state.input,
    todos: state.todos,
  }),
  (dispatch) =>
    bindActionCreators(
      {
        changeTodoInput,
        addTodo,
        toggleTodoStatus,
        removeTodo,
        clearAllTodos,
      },
      dispatch,
    ),
)(TodosContainer); */

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
