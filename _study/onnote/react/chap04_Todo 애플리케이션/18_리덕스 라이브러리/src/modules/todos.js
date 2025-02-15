import { createAction, handleActions } from 'redux-actions';

// 액션 타입
const CHANGE_TODO_INPUT = 'CHANGE_TODO_INPUT';
const ADD_TODO = 'ADD_TODO';
const TOGGLE_TODO_STATUS = 'TOGGLE_TODO_STATUS';
const REMOVE_TODO = 'REMOVE_TODO';
const CLEAR_ALL_TODOS = 'CLEAR_ALL_TODOS';

/* 액션 생성 함수
export const changeTodoInput = (input) => ({
  type: CHANGE_TODO_INPUT,
  input,
});
export const addTodo = (input) => ({
  type: ADD_TODO,
  todo: {
    text: input,
    done: false,
  },
});
export const toggleTodoStatus = (id) => ({
  type: TOGGLE_TODO_STATUS,
  id,
});
export const removeTodo = (id) => ({
  type: REMOVE_TODO,
  id,
});
export const clearAllTodos = () => ({
  type: CLEAR_ALL_TODOS,
});
*/

// createAction 함수를 사용하여 액션 생성 함수 작성
export const changeTodoInput = createAction(
  CHANGE_TODO_INPUT,
  (input) => input,
);
export const addTodo = createAction(ADD_TODO, (input) => ({
  text: input,
  done: false,
}));
export const toggleTodoStatus = createAction(TOGGLE_TODO_STATUS, (id) => id);
export const removeTodo = createAction(REMOVE_TODO, (id) => id);
export const clearAllTodos = createAction(CLEAR_ALL_TODOS);

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
};

/* 리듀서 함수 정의
function todos(state=initialState, action) {
  switch (action.type) {
    case CHANGE_TODO_INPUT:
      return {
        ...state,
        input: action.input,
      };
    case ADD_TODO:
      const newTodo = { ...action.todo, id: state.nextTodoId };
      state.nextTodoId += 1;
      return {
        ...state,
        todos: state.todos.concat(newTodo),
      };
    case TOGGLE_TODO_STATUS:
      return {
        ...state,
        todos: state.todos.map((todo) =>
          todo.id === action.id ? { ...todo, done: !todo.done } : todo,
        ),
      };
    case REMOVE_TODO:
      return {
        ...state,
        todos: state.todos.filter((todo) => todo.id !== action.id),
      };
    case CLEAR_ALL_TODOS:
      return {
        ...state,
        // 완료된 항목만 삭제하도록 수정
        todos: state.todos.filter((todo) => !todo.done),
      };
    default:
      return state;
  }
}
*/

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
    [REMOVE_TODO]: (state, { payload: id }) => ({
      ...state,
      todos: state.todos.filter((todo) => todo.id !== id),
    }),
    [CLEAR_ALL_TODOS]: (state, action) => ({
      ...state,
      // 완료된 항목만 삭제하도록 수정
      todos: state.todos.filter((todo) => !todo.done),
    }),
  },
  initialState,
);

export default todos;
