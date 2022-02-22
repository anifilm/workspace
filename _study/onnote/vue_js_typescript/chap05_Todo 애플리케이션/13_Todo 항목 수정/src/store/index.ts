import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';
import {
  ADD_TODO,
  CHECK_TODO,
  UPDATE_TODO,
  REMOVE_TODO,
  CLEAR_ALL,
  RESTORE,
} from './mutation-types';

Vue.use(Vuex);

export interface Todo {
  id: number;
  text: string;
  done: boolean;
  isEditing: boolean;
}

// 스토어 타입 선언
interface TodoState {
  todos: Todo[];
}

const store: StoreOptions<TodoState> = {
  state: {
    todos: [
      {
        id: 1,
        text: 'todoItem1',
        done: true,
        isEditing: false,
      },
      {
        id: 2,
        text: 'todoItem2',
        done: false,
        isEditing: false,
      },
      {
        id: 3,
        text: 'todoItem3',
        done: false,
        isEditing: false,
      },
    ],
  },
  mutations: {
    [ADD_TODO](state, todo: string) {
      const newTodo: Todo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
        isEditing: false,
      };
      state.todos.push(newTodo);
    },
    [CHECK_TODO](state, id: number) {
      state.todos = state.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    [UPDATE_TODO](state, payload) {
      const { id, content } = payload;
      const isEditing = false;
      const targetIndex = state.todos.findIndex((v) => v.id === id);
      const targetTodo = state.todos[targetIndex];
      state.todos.splice(targetIndex, 1, { ...targetTodo, text: content, isEditing });
    },
    [REMOVE_TODO](state, index: number) {
      state.todos.splice(index, 1);
    },
    [CLEAR_ALL](state) {
      state.todos = state.todos.filter((todo) => !todo.done);
    },
    [RESTORE](state, { todos }) {
      state.todos = todos;
    }
  },
  actions: {
    addTodo({ commit }, payload: string) {
      commit(ADD_TODO, payload);
    },
    checkTodo({ commit }, id: number) {
      commit(CHECK_TODO, id);
    },
    updateTodo({ commit }, payload) {
      commit(UPDATE_TODO, payload);
    },
    removeTodo({ commit }, index: number) {
      commit(REMOVE_TODO, index);
    },
    clearAll({ commit }) {
      commit(CLEAR_ALL);
    },
    save({ state }) {
      const data = { todos: state.todos };
      localStorage.setItem('vue-todo-app-data', JSON.stringify(data));
    },
    restore({ commit }) {
      const data = localStorage.getItem('vue-todo-app-data');
      if (data) {
        commit(RESTORE, JSON.parse(data));
      }
    },
  },
};

export default new Vuex.Store(store);
