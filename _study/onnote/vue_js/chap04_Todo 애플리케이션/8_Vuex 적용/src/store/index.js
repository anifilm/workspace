import Vue from 'vue';
import Vuex from 'vuex';

Vue.use(Vuex);

const store = new Vuex.Store({
  state: {
    todoItems: [
      {
        id: 1,
        text: 'todoItem1',
        done: true,
      },
      {
        id: 2,
        text: 'todoItem2',
        done: false,
      },
      {
        id: 3,
        text: 'todoItem3',
        done: false,
      },
    ],
  },
  mutations: {
    ADD_TODO(state, todoItem) {
      const todo = {
        id: state.todoItems.length + 1,
        text: todoItem,
        done: false,
      };
      state.todoItems.push(todo);
    },
    REMOVE_TODO(state, index) {
      state.todoItems.splice(index, 1);
    },
    CLEAR_ALL(state) {
      state.todoItems = state.todoItems.filter((todo) => !todo.done);
    },
  },
  actions: {
    addTodo(context, payload) {
      context.commit('ADD_TODO', payload);
    },
    removeTodo(context, payload) {
      context.commit('REMOVE_TODO', payload);
    },
    clearAll(context) {
      context.commit('CLEAR_ALL');
    },
  },
});

export default store;
