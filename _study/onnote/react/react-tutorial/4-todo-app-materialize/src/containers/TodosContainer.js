import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
  changeFilter,
  editTodo,
} from '../actions/todos';
import { getFilteredTodos } from '../selectors/todos';
import Todos from '../components/Todos';

// useSelector, useDispatch 훅 사용
const TodosContainer = () => {
  // 스토어 상태 조회
  const { input, filteredTodos, filter } = useSelector((state) => ({
    input: state.input,
    filteredTodos: getFilteredTodos(state),
    filter: state.filter,
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();
  // 스토어 상태 변경 함수 작성
  const onChangeInput = useCallback((input) => dispatch(changeTodoInput(input)), [dispatch]);
  const onInsert = useCallback((input) => dispatch(addTodo(input)), [dispatch]);
  const onToggle = useCallback((id) => dispatch(toggleTodoStatus(id)), [dispatch]);
  const onRemove = useCallback((id) => dispatch(removeTodo(id)), [dispatch]);
  const onClearAll = useCallback(() => dispatch(clearAllTodos()), [dispatch]);
  const onChangeFilter = useCallback((filter) => dispatch(changeFilter(filter)), [dispatch]);
  const onEdit = useCallback((id, input) => dispatch(editTodo(id, input)), [dispatch]);
  /* 필터링 처리된 Todo 항목 목록 반환
  const getFilteredTodos = (todos, filter) => {
    if (filter === 'ALL') {
      return todos;
    }
    if (filter === 'A') {
      return todos.filter((todo) => {
        return todo.done === false;
      });
    }
    if (filter === 'B') {
      return todos.filter((todo) => {
        return todo.done === true;
      });
    }
  }

  const filteredTodos = getFilteredTodos(todos, filter);
  */

  // filteredTodos를 props로 전달
  return (
    <Todos
      input={input}
      todos={filteredTodos}
      filter={filter}
      onChangeInput={onChangeInput}
      onInsert={onInsert}
      onToggle={onToggle}
      onRemove={onRemove}
      onClearAll={onClearAll}
      onChangeFilter={onChangeFilter}
      onEdit={onEdit}
    />
  );
};

/* 익명함수 처리
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
/* bindActionCreators 유틸 함수 사용
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
/* 객체 형태 처리
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
*/

export default TodosContainer;