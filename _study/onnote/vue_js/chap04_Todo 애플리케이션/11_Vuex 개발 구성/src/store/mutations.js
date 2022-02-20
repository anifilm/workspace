import {
  ADD_TODO,
  CHECK_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
} from './mutation-types';

export default {
  [ADD_TODO](state, todo) {
    const todo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todo,
      done: false,
    }
    state.todos.push(todo);
  },
  [CHECK_TODO](state, id) {
    state.todos = state.todos.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  },
  [REMOVE_TODO](state, index) {
    state.todos.splice(index, 1);
  },
  [CLEAR_ALL](state) {
    // 완료된 항목 삭제로 수정
    state.todos = state.todos.filter((todo) => !todo.done);
  },
};
