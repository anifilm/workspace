import { ADD_TODO, REMOVE_TODO, CLEAR_ALL, RESTORE } from './mutation-types';

export default {
  [ADD_TODO](state, todo) {
    const newTodo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todo,
      done: false,
    }
    state.todos.push(newTodo);
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
