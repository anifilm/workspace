import { Todo } from '../App';
import { createAction } from 'redux-actions';
import { createReducer } from 'typesafe-actions';

// 액션 타입 (as const 삭제)
const CHANGE_TODO_INPUT = 'CHANGE_TODO_INPUT';
const ADD_TODO = 'ADD_TODO';
const TOGGLE_TODO_STATUS = 'TOGGLE_TODO_STATUS';
const REMOVE_TODO = 'REMOVE_TODO';
const CLEAR_ALL_TODOS = 'CLEAR_ALL_TODOS';
const RESTORE = 'RESTORE';
const CHANGE_FILTER = 'CHANGE_FILTER';

// createActions 함수를 사용하여 액션 생성 함수 작성
export const changeTodoInput = createAction(CHANGE_TODO_INPUT, (input: string) => input);
export const addTodo = createAction(ADD_TODO, (input: string) => ({
  text: input,
  done: false,
}));
export const toggleTodoStatus = createAction(TOGGLE_TODO_STATUS, (id: number) => id);
export const removeTodo = createAction(REMOVE_TODO, (id: number) => id);
export const clearAllTodos = createAction(CLEAR_ALL_TODOS);
export const restore = createAction(RESTORE, (data: string) => data);
export const changeFilter = createAction(CHANGE_FILTER, (filter: string) => filter);

// 상태 인터페이스 정의
export interface TodoState {
  input: string;
  todos: Todo[];
  nextTodoId: number;
  filter: string;
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
