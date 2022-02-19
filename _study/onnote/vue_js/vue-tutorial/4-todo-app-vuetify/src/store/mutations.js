import { ADD_TODO, REMOVE_TODO, CLEAR_ALL, RESTORE } from './mutation-types';

export default {
  [ADD_TODO](state, todoItem) {
    state.todoItems.push(todoItem);
  },
  [REMOVE_TODO](state, index) {
    state.todoItems.splice(index, 1);
  },
  [CLEAR_ALL](state) {
    // TODO: 완료 항목 삭제로 수정 필요
    state.todoItems = [];
  },
  [RESTORE](state, { todoItems }) {
    state.todoItems = todoItems;
  },
};
