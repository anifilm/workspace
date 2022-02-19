import { ADD_TODO, REMOVE_TODO, CLEAR_ALL, RESTORE } from './mutation-types';

export default {
  addTodo({ commit }, payload) {
    commit(ADD_TODO, payload);
  },
  removeTodo({ commit }, payload) {
    commit(REMOVE_TODO, payload);
  },
  clearAll({ commit }) {
    commit(CLEAR_DONE);
  },
  save({ state }) {
    const data = {
      todoItems: state.todoItems,
    };
    localStorage.setItem('vue-todo-app-data', JSON.stringify(data));
  },
  restore({ commit }) {
    const data = localStorage.getItem('vue-todo-app-data');
    if (data) {
      commit(RESTORE, JSON.parse(data));
    }
  },
};
