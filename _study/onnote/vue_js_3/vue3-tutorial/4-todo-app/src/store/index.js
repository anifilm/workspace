import { createStore } from 'vuex';

export const store = createStore({
  state: () => ({
    todos: [],
  }),
  mutations: {
    ADD_TODO(state, todo) {
      state.todos.push(todo);
    },
    EDIT_TODO(state, payload) {
      const { content, index } = payload;
      const isEditing = false;
      state.todos.splice(index, 1, { isEditing, content });
    },
    REMOVE_TODO(state, index) {
      state.todos.splice(index, 1);
    },
    CLEAR_ALL(state) {
      state.todos.length = 0;
    },
    RESTORE(state, { todos }) {
      state.todos = todos;
    },
  },
  actions: {
    addTodo(context, todo) {
      context.commit('ADD_TODO', todo);
    },
    editTodo(context, payload) {
      context.commit('EDIT_TODO', payload);
    },
    removeTodo(context, index) {
      context.commit('REMOVE_TODO', index);
    },
    clearAll(context) {
      context.commit('CLEAR_ALL');
    },
    // 애플리케이션 상태 데이터를 저장
    save({ state }) {
      const data = {
        todos: state.todos,
      };
      localStorage.setItem('vue-todo-app-data', JSON.stringify(data));
    },
    // 저장된 애플리케이션 상태 데이터를 불러옴
    restore({ commit }) {
      const data = localStorage.getItem('vue-todo-app-data');
      if (data) {
        commit('RESTORE', JSON.parse(data));
      }
    },
  },
});
