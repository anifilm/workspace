import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
// 액션 생성 함수 임포트
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  editTodo,
  removeTodo,
  clearAllTodos,
  changeFilter,
} from '../actions/todos';
// 상태 인터페이스 임포트
import { TodoState } from '../reducers/todos';
// Todos 컴포넌트 임포트
import Todos from '../components/Todos';
// getFilteredTodos 선택자 함수 임포트
import { getFilteredTodos } from '../selectors/todos';

// 리덕스 훅 사용
const TodosContainer = () => {
  // 선택자 함수로 상태 데이터 필터링
  const { input, filter, filteredTodos } = useSelector((state: TodoState) => ({
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
      onChangeInput={onChangeInput}
      onInsert={onInsert}
      onToggle={onToggle}
      onEdit={onEdit}
      onRemove={onRemove}
      onClearAll={onClearAll}
      filter={filter}
      onChangeFilter={onChangeFilter}
    />
  );
};

export default TodosContainer;
