import {
  ADD_TODO,
  CHECK_TODO,
  SET_EDITING_ID,
  RESET_EDITING_ID,
  UPDATE_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
  RESTORE,
  SET_FILTER,
} from './mutation-types';

export default {
  [ADD_TODO](state, todo) {
    const newTodo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todo,
      done: false,
    };
    state.todos.push(newTodo);
  },
  [CHECK_TODO](state, id) {
    state.todos = state.todos.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  },
  [SET_EDITING_ID](state, id) {
    state.editingId = id;
  },
  [RESET_EDITING_ID](state) {
    state.editingId = 0;
  },
  [UPDATE_TODO](state, payload) {
    const { id, content } = payload;
    const targetIndex = state.todos.findIndex((v) => v.id === id);
    const targetTodo = state.todos[targetIndex];
    state.todos.splice(targetIndex, 1, { ...targetTodo, text: content });
  },
  [REMOVE_TODO](state, id) {
    const targetIndex = state.todos.findIndex((v) => v.id === id);
    state.todos.splice(targetIndex, 1);
  },
  [CLEAR_ALL](state) {
    // 완료된 항목 삭제로 수정
    state.todos = state.todos.filter((todo) => !todo.done);
  },
  [RESTORE](state, { todos }) {
    state.todos = todos;
  },
  [SET_FILTER](state, filter) {
    state.filter = filter;
  }
};
