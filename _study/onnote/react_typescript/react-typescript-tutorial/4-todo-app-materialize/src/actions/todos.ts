import { createAction } from 'redux-actions';
import {
  CHANGE_TODO_INPUT,
  ADD_TODO,
  TOGGLE_TODO_STATUS,
  SET_EDITING_ID,
  RESET_EDITING_ID,
  EDIT_TODO,
  REMOVE_TODO,
  CLEAR_ALL_TODOS,
  RESTORE,
  CHANGE_FILTER,
} from '../constants/ActionTypes';

// createActions 함수를 사용하여 액션 생성 함수 작성
export const changeTodoInput = createAction(CHANGE_TODO_INPUT, (input: string) => input);
export const addTodo = createAction(ADD_TODO, (input: string) => ({
  text: input,
  done: false,
}));
export const toggleTodoStatus = createAction(TOGGLE_TODO_STATUS, (id: number) => id);
export const setEditingId = createAction(SET_EDITING_ID, (id: number) => id);
export const resetEditingId = createAction(RESET_EDITING_ID);
export const editTodo = createAction(EDIT_TODO, (id: number, input: string) => ({
  id,
  input,
}));
export const removeTodo = createAction(REMOVE_TODO, (id: number) => id);
export const clearAllTodos = createAction(CLEAR_ALL_TODOS);
export const restore = createAction(RESTORE, (data: string) => data);
export const changeFilter = createAction(CHANGE_FILTER, (filter: string) => filter);
