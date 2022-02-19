import {
  ADD_TODO,
  CHECK_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
  RESTORE,
} from './mutation-types';

export default {
  [ADD_TODO](state, todoItem) {
    const todo = {
      id: state.todoItems.length + 1,
      text: todoItem,
      done: false,
    };
    state.todoItems.push(todo);
  },
  [CHECK_TODO](state, id) {
    state.todoItems = state.todoItems.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  },
  [REMOVE_TODO](state, id) {
    state.todoItems = state.todoItems.filter((todo) => todo.id !== id);
  },
  [CLEAR_ALL](state) {
    // 완료된 항목 삭제로 수정
    state.todoItems = state.todoItems.filter((todo) => !todo.done);
  },
  [RESTORE](state, { todoItems }) {
    state.todoItems = todoItems;
  },
};
