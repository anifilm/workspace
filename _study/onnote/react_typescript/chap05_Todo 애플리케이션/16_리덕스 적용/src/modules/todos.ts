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
export const addTodo = (input: string) => ({
  type: ADD_TODO,
  todo: {
    text: input,
    done: false,
  },
});
export const toggleTodoStatus = (id: number) => ({
  type: TOGGLE_TODO_STATUS,
  id,
});
export const removeTodo = (id: number) => ({
  type: REMOVE_TODO,
  id,
});
export const clearAllTodos = () => ({
  type: CLEAR_ALL_TODOS,
});

// 상태 인터페이스 정의
export interface TodoState {
  input: string;
  todos: Todo[];
  nextTodoId: number;
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
};

// 액션 타입 정의
type TodoAction =
  | ReturnType<typeof changeTodoInput>
  | ReturnType<typeof addTodo>
  | ReturnType<typeof toggleTodoStatus>
  | ReturnType<typeof removeTodo>
  | ReturnType<typeof clearAllTodos>;

// 리듀서 함수 정의
function todos(state: TodoState = initialState, action: TodoAction) {
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
