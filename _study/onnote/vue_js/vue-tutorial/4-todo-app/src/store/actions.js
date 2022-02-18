import { ADD_TODO, REMOVE_TODO, CLEAR_DONE } from './mutation-types';

export default {
  addTodo({ commit }, payload) {
    commit(ADD_TODO, payload);
  },
  removeTodo({ commit }, payload) {
    commit(REMOVE_TODO, payload);
  },
  clearDone({ commit }) {
    commit(CLEAR_DONE);
  },
};
