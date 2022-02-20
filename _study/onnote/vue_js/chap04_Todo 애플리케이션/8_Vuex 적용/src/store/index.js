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
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todoItem,
        done: false,
      };
      state.todoItems.push(todo);
    },
    CHECK_TODO(state, id) {
      state.todoItems = state.todoItems.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    REMOVE_TODO(state, id) {
      state.todoItems = state.todoItems.filter((todo) => todo.id !== id);
    },
    CLEAR_ALL(state) {
      state.todoItems = state.todoItems.filter((todo) => !todo.done);
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
