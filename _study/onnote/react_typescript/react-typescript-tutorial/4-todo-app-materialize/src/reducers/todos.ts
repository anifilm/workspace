import { Todo } from '../App';
import { createReducer } from 'typesafe-actions';
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

// 상태 인터페이스 정의
export interface TodoState {
  input: string;
  todos: Todo[];
  nextTodoId: number;
  filter: string;
  editingId: number;
}

// 초기 상태
const initialState: TodoState = {
  input: '',
  todos: [
    {
      id: 1,
      text: 'todoItem1',
      done: true,
    },
    {
      id: 2,
      text: 'todoItem2',
      done: false,
    },
    {
      id: 3,
      text: 'todoItem3',
      done: false,
    },
  ],
  nextTodoId: 4,
  filter: 'ALL',
  editingId: 0,
};

// createReducer 함수를 사용하여 리듀서 작성
const todos = createReducer(
  initialState,
  {
    [CHANGE_TODO_INPUT]: (state, { payload: input }) => ({
      ...state,
      input,
    }),
    [ADD_TODO]: (state, { payload: todo }) => {
      const newTodo = { ...todo, id: state.nextTodoId };
      const nextTodoId = state.nextTodoId + 1;
      return {
        ...state,
        todos: state.todos.concat(newTodo),
        nextTodoId,
      };
    },
    [TOGGLE_TODO_STATUS]: (state, { payload: id }) => ({
      ...state,
      todos: state.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      ),
    }),
    // 편집 항목 ID 설정
    [SET_EDITING_ID]: (state, { payload: id }) => ({
      ...state,
      editingId: id,
    }),
    // 편집 항목 ID 리셋
    [RESET_EDITING_ID]: (state) => ({
      ...state,
      editingId: 0,
    }),
    // Todo 항목 변경 액션 처리
    [EDIT_TODO]: (state, action) => ({
      ...state,
      todos: state.todos.map((todo) =>
        todo.id === action.payload.id ? { ...todo, text: action.payload.input } : todo
      ),
    }),
    [REMOVE_TODO]: (state, { payload: id }) => ({
      ...state,
      todos: state.todos.filter((todo) => todo.id !== id),
    }),
    [CLEAR_ALL_TODOS]: (state, action) => ({
      ...state,
      // 완료된 항목만 삭제하도록 수정
      todos: state.todos.filter((todo) => !todo.done),
    }),
    // 상태 복원 액션 처리
    [RESTORE]: (state, action) => {
      //console.log(action);
      //console.log(action.payload.todos);
      //console.log(action.payload.nextTodoId);
      return ({
        ...state,
        todos: action.payload.todos,
        nextTodoId: action.payload.nextTodoId,
      });
    },
    // 필터링 유형 변경 액션 처리
    [CHANGE_FILTER]: (state, { payload: filter }) => ({
      ...state,
      filter,
    }),
  },
);

export default todos;
