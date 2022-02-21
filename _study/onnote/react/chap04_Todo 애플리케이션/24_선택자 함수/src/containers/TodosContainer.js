import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import {
  addTodo,
  toggleTodoStatus,
  changeTodoInput,
  removeTodo,
  clearAllTodos,
  changeFilter,
} from '../modules/todos';
import Todos from '../components/Todos';
// getFilteredTodos 선택자 함수 임포트
import { getFilteredTodos } from '../modules/selector';

// 리덕스 훅 사용
const TodosContainer = () => {
  // 선택자 함수로 상태 데이터 필터링
  const { input, filter, filteredTodos } = useSelector((state) => ({
    input: state.input,
    filter: state.filter,
    filteredTodos: getFilteredTodos(state),
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 스토어 상태 변경 함수 작성
  const onInsert = useCallback((input) => dispatch(addTodo(input)), [dispatch]);
  const onToggle = useCallback((id) => dispatch(toggleTodoStatus(id)), [dispatch]);
  const onChangeInput = useCallback((input) => dispatch(changeTodoInput(input)), [dispatch]);
  const onRemove = useCallback((id) => dispatch(removeTodo(id)), [dispatch]);
  const onClearAll = useCallback(() => dispatch(clearAllTodos()), [dispatch]);
  const onChangeFilter = useCallback((filter) => dispatch(changeFilter(filter)), [dispatch]);

  /* 필터링 처리된 Todo 항목 목록 반환
  const getFilteredTodos = (todos, filter) => {
    if (filter === 'ALL') {
      return todos;
    }
    if (filter === 'NOTDONE') {
      return todos.filter((todo) => todo.done === false);
    }
    if (filter === 'DONE') {
      return todos.filter((todo) => todo.done === true);
    }
  };
  // 필터링 처리된 Todo 항목 목록
  const filteredTodos = getFilteredTodos(todos, filter);
  */

  return (
    <Todos
      input={input}
      todos={filteredTodos}
      onInsert={onInsert}
      onToggle={onToggle}
      onChangeInput={onChangeInput}
      onRemove={onRemove}
      onClearAll={onClearAll}
      filter={filter}
      onChangeFilter={onChangeFilter}
    />
  );
};

export default TodosContainer;
