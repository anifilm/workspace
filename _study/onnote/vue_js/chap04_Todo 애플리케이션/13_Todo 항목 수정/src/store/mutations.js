import {
  ADD_TODO,
  CHECK_TODO,
  EDIT_TODO,
  UPDATE_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
  RESTORE,
} from './mutation-types';

export default {
  [ADD_TODO](state, todoItem) {
    const todo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todoItem,
      done: false,
      isEditing: false,
    };
    state.todoItems.push(todo);
  },
  [CHECK_TODO](state, id) {
    state.todoItems = state.todoItems.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  },
  [EDIT_TODO](state, id) {
    state.todoItems = state.todoItems.map((todo) =>
      todo.id === id ? { ...todo, isEditing: !todo.isEditing } : todo,
    );
  },
  [UPDATE_TODO](state, payload) {
    const { id, content } = payload;
    state.todoItems = state.todoItems.map((todo) =>
      todo.id === id ? { ...todo, text: content } : todo,
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
