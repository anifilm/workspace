import { ADD_TODO, REMOVE_TODO, CLEAR_ALL } from './mutation-types';

export default {
  addTodo({ commit }, payload) {
    commit(ADD_TODO, payload);
  },
  removeTodo({ commit }, payload) {
    commit(REMOVE_TODO, payload);
  },
  clearAll({ commit }) {
    commit(CLEAR_ALL);
  },
};
