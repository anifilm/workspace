import React, { useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
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

// 리덕스 훅 사용
const TodosContainer = () => {
  // 스토어 상태 조회
  const { input, todos } = useSelector((state: TodoState) => ({
    input: state.input,
    todos: state.todos,
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 스토어 상태 변경 함수 작성
  const onChangeInput = useCallback((input) => dispatch(changeTodoInput(input)), [dispatch]);
  const onInsert = useCallback((input) => dispatch(addTodo(input)), [dispatch]);
  const onToggle = useCallback((id) => dispatch(toggleTodoStatus(id)), [dispatch]);
  const onRemove = useCallback((id) => dispatch(removeTodo(id)), [dispatch]);
  const onClearAll = useCallback(() => dispatch(clearAllTodos()), [dispatch]);

  return (
    <Todos
      input={input}
      todos={todos}
      onChangeInput={onChangeInput}
      onInsert={onInsert}
      onToggle={onToggle}
      onRemove={onRemove}
      onClearAll={onClearAll}
    />
  );
};

export default TodosContainer;
