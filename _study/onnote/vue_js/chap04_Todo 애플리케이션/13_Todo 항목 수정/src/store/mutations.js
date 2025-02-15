import {
  ADD_TODO,
  CHECK_TODO,
  UPDATE_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
  RESTORE,
} from './mutation-types';

export default {
  [ADD_TODO](state, todo) {
    const newTodo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todo,
      done: false,
      isEditing: false,
    };
    state.todos.push(newTodo);
  },
  [CHECK_TODO](state, id) {
    state.todos = state.todos.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  },
  [UPDATE_TODO](state, payload) {
    const { id, content } = payload;
    const isEditing = false;
    const targetIndex = state.todos.findIndex((v) => v.id === id);
    const targetTodo = state.todos[targetIndex];
    state.todos.splice(targetIndex, 1, { ...targetTodo, text: content, isEditing });
  },
  [REMOVE_TODO](state, index) {
    state.todos.splice(index, 1);
  },
  [CLEAR_ALL](state) {
    // 완료된 항목 삭제로 수정
    state.todos = state.todos.filter((todo) => !todo.done);
  },
  [RESTORE](state, { todos }) {
    state.todos = todos;
  },
};
