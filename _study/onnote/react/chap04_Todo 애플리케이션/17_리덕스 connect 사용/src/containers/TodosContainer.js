import React from 'react';
import { connect } from 'react-redux';
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
} from '../modules/todos';
import Todos from '../components/Todos';

// connect 함수에 의해 상태와 스토어 상태 변경 함수를 props로 전달 받음
const TodosContainer = ({
  input,
  todos,
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
}) => {
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
const mapStateToProps = (state) => ({
  input: state.input,
  todos: state.todos,
});

// 스토어 상태 변경 함수를 props로 맵핑
const mapDispatchToProps = (dispatch) => ({
  changeTodoInput: (input) => {
    dispatch(changeTodoInput(input));
  },
  addTodo: (input) => {
    dispatch(addTodo(input));
  },
  toggleTodoStatus: (id) => {
    dispatch(toggleTodoStatus(id));
  },
  removeTodo: (id) => {
    dispatch(removeTodo(id));
  },
  clearAllTodos: () => {
    dispatch(clearAllTodos());
  },
});

// 리덕스와 연동된 컴포넌트 반환
export default connect(mapStateToProps, mapDispatchToProps)(TodosContainer);
*/

/* 익명 함수로 처리
export default connect(
  (state) => ({
    input: state.input,
    todos: state.todos,
  }),
  (dispatch) => ({
    changeTodoInput: (input) => dispatch(changeTodoInput(input)),
    addTodo: (input) => dispatch(addTodo(input)),
    toggleTodoStatus: (id) => dispatch(toggleTodoStatus(id)),
    removeTodo: (id) => dispatch(removeTodo(id)),
    clearAllTodos: () => dispatch(clearAllTodos()),
  }),
)(TodosContainer);
*/

/* bindActionsCreator 유틸 함수 사용
export default connect(
  (state) => ({
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
)(TodosContainer);
*/

// 객체 형태 처리
export default connect(
  (state) => ({
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
