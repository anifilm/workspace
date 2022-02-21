import React from 'react';
import { connect } from 'react-redux';
import {
  addTodo,
  toggleTodoStatus,
  changeTodoInput,
  removeTodo,
  clearAllTodos,
} from '../modules/todos';
import Todos from '../components/Todos';

// connect 함수에 의해 상태와 스토어 상태 변경 함수를 props로 전달 받음
const TodosContainer = ({
  input,
  todos,
  addTodo,
  toggleTodoStatus,
  changeTodoInput,
  removeTodo,
  clearAllTodos,
}) => {
  return (
    <Todos
      input={input}
      todos={todos}
      onInsert={addTodo}
      onToggle={toggleTodoStatus}
      onChangeInput={changeTodoInput}
      onRemove={removeTodo}
      onClearAll={clearAllTodos}
    />
  );
};

// 스토어 상태를 props로 맵핑
const mapStateToProps = (state) => ({
  input: state.input,
  todos: state.todos,
});

// 스토어 상태 변경 함수를 props로 맵핑
const mapDispatchToProps = (dispatch) => ({
  addTodo: (input) => {
    dispatch(addTodo(input));
  },
  toggleTodoStatus: (id) => {
    dispatch(toggleTodoStatus(id));
  },
  changeTodoInput: (input) => {
    dispatch(changeTodoInput(input));
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
