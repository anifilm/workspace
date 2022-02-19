import { ADD_TODO, REMOVE_TODO, CLEAR_ALL, RESTORE } from './mutation-types';

export default {
  [ADD_TODO](state, todoItem) {
    const todo = {
      id: state.todoItems.length + 1,
      text: todoItem,
      done: false,
    }
    state.todoItems.push(todo);
  },
  [REMOVE_TODO](state, index) {
    state.todoItems.splice(index, 1);
  },
  [CLEAR_ALL](state) {
    // 완료된 항목 삭제로 수정
    state.todoItems = state.todoItems.filter((todo) => !todo.done);
  },
  [RESTORE](state, { todoItems }) {
    state.todoItems = todoItems;
  },
};
