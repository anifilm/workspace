import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  editTodo,
  removeTodo,
  clearAllTodos,
  changeFilter,
} from '../actions/todos';
import { getFilteredTodos } from '../selectors/todos';
import Todos from '../components/Todos';

// useSelector, useDispatch 훅 사용
const TodosContainer = () => {
  // 스토어 상태 조회
  const { input, filter, filteredTodos } = useSelector((state) => ({
    input: state.input,
    filter: state.filter,
    filteredTodos: getFilteredTodos(state),
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 스토어 상태 변경 함수 작성
  const onChangeInput = useCallback((input) => dispatch(changeTodoInput(input)), [dispatch]);
  const onInsert = useCallback((input) => dispatch(addTodo(input)), [dispatch]);
  const onToggle = useCallback((id) => dispatch(toggleTodoStatus(id)), [dispatch]);
  const onEdit = useCallback((id, input) => dispatch(editTodo(id, input)), [dispatch]);
  const onRemove = useCallback((id) => dispatch(removeTodo(id)), [dispatch]);
  const onClearAll = useCallback(() => dispatch(clearAllTodos()), [dispatch]);
  const onChangeFilter = useCallback((filter) => dispatch(changeFilter(filter)), [dispatch]);

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

export default TodosContainer;
