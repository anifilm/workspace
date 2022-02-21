import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
// 액션 생성 함수 임포트
import {
  changeTodoInput,
  addTodo,
  toggleTodoStatus,
  removeTodo,
  clearAllTodos,
  changeFilter,
} from '../modules/todos';
// 상태 인터페이스 임포트
import { TodoState } from '../modules/todos';
// Todos 컴포넌트 임포트
import Todos from '../components/Todos';

// 타입스크립트 인터페이스 임포트
import { Todo } from '../App';

// 리덕스 훅 사용
const TodosContainer = () => {
  // 스토어 상태 조회
  const { input, todos, filter } = useSelector((state: TodoState) => ({
    input: state.input,
    todos: state.todos,
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

  // 필터링 처리된 Todo 항목 목록 반환
  const getFilteredTodos = (todos: Todo[], filter: string) => {
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

  return (
    <Todos
      input={input}
      todos={filteredTodos}
      onChangeInput={onChangeInput}
      onInsert={onInsert}
      onToggle={onToggle}
      onRemove={onRemove}
      onClearAll={onClearAll}
      filter={filter}
      onChangeFilter={onChangeFilter}
    />
  );
};

export default TodosContainer;
