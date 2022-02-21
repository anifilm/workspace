import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';

Vue.use(Vuex);

interface Todos {
  id: number;
  text: string;
  done: boolean;
}

// 스토어 타입 선언
interface TodoState {
  todos: Todos[];
}

const store: StoreOptions<TodoState> = {
  state: {
    todos: [
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
    ADD_TODO(state, todo: string) {
      const newTodo: Todos = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
      };
      state.todos.push(newTodo);
    },
    CHECK_TODO(state, id: number) {
      state.todos = state.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    REMOVE_TODO(state, index: number) {
      state.todos.splice(index, 1);
    },
    CLEAR_ALL(state) {
      state.todos = state.todos.filter((todo) => !todo.done);
    },
  },
  actions: {
    addTodo({ commit }, payload: string) {
      commit('ADD_TODO', payload);
    },
    checkTodo({ commit }, id: number) {
      commit('CHECK_TODO', id);
    },
    removeTodo({ commit }, index: number) {
      commit('REMOVE_TODO', index);
    },
    clearAll({ commit }) {
      commit('CLEAR_ALL');
    },
  },
};

export default new Vuex.Store(store);
