import { Todo } from '../App';

// 액션 타입
const CHANGE_TODO_INPUT = 'CHANGE_TODO_INPUT' as const;
const ADD_TODO = 'ADD_TODO' as const;
const TOGGLE_TODO_STATUS = 'TOGGLE_TODO_STATUS' as const;
const REMOVE_TODO = 'REMOVE_TODO' as const;
const CLEAR_ALL_TODOS = 'CLEAR_ALL_TODOS' as const;

// 액션 생성 함수
export const changeTodoInput = (input: string) => ({
  type: CHANGE_TODO_INPUT,
  input,
});

export const clearAllTodos = () => ({
  type: CLEAR_ALL_TODOS,
});

// 상태 인터페이스 정의
export interface TodoState {

}

// 초기 상태
const initialState: TodoState = {
  input: '',
  todos: [],
  nextTodoId: 1,
};
