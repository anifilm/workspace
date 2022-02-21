// 액션 타입
const CHANGE_TODO_INPUT = 'CHANGE_TODO_INPUT';
const ADD_TODO = 'ADD_TODO';
const TOGGLE_TODO_STATUS = 'TOGGLE_TODO_STATUS';
const REMOVE_TODO = 'REMOVE_TODO';
const CLEAR_ALL_TODOS = 'CLEAR_ALL_TODOS';

// 액션 생성 함수
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

// 초기 상태
const initialState = {
  input: '',
  todos: [],
  nextTodoId: 1,
};

// 리듀서 함수 정의
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

export default todos;
