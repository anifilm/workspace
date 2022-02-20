import Vue from 'vue';
import Vuex from 'vuex';

Vue.use(Vuex);

const store = new Vuex.Store({
  state: {
    todos: [
      {
        id: 1,
        text: 'todo1',
        done: true,
      },
      {
        id: 2,
        text: 'todo2',
        done: false,
      },
      {
        id: 3,
        text: 'todo3',
        done: false,
      },
    ],
  },
  mutations: {
    ADD_TODO(state, todo) {
      const todo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
      };
      state.todos.push(todo);
    },
    CHECK_TODO(state, id) {
      state.todos = state.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    REMOVE_TODO(state, index) {
      state.todos.splice(index, 1);
    },
    CLEAR_ALL(state) {
      state.todos = state.todos.filter((todo) => !todo.done);
    },
  },
  actions: {
    addTodo(context, payload) {
      context.commit('ADD_TODO', payload);
    },
    checkTodo(context, payload) {
      context.commit('CHECK_TODO', payload);
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
