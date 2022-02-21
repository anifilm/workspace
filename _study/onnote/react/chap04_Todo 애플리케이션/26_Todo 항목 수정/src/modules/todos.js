import { createAction, handleActions } from 'redux-actions';

// 액션 타입
const CHANGE_TODO_INPUT = 'CHANGE_TODO_INPUT';
const ADD_TODO = 'ADD_TODO';
const TOGGLE_TODO_STATUS = 'TOGGLE_TODO_STATUS';
const EDIT_TODO = 'EDIT_TODO';
const REMOVE_TODO = 'REMOVE_TODO';
const CLEAR_ALL_TODOS = 'CLEAR_ALL_TODOS';
const RESTORE = 'RESTORE';
const CHANGE_FILTER = 'CHANGE_FILTER';

// createAction 함수를 사용하여 액션 생성 함수 작성
export const changeTodoInput = createAction(CHANGE_TODO_INPUT, (input) => input);
export const addTodo = createAction(ADD_TODO, (input) => ({
  text: input,
  done: false,
}));
export const toggleTodoStatus = createAction(TOGGLE_TODO_STATUS, (id) => id);
export const editTodo = createAction(EDIT_TODO, (id, input) => ({
  id,
  input,
}));
export const removeTodo = createAction(REMOVE_TODO, (id) => id);
export const clearAllTodos = createAction(CLEAR_ALL_TODOS);
export const restore = createAction(RESTORE, (data) => data);
export const changeFilter = createAction(CHANGE_FILTER, (filter) => filter);

// 초기 상태
const initialState = {
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

// handleActions 함수를 사용하여 리듀서 작성
const todos = handleActions(
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
  initialState,
);

export default todos;
