import { createStore } from 'vuex';

export const store = createStore({
  state: () => ({
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
  }),
  mutations: {
    ADD_TODO(state, todo) {
      const newTodo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
      };
      state.todos.push(newTodo);
    },
    CHECK_TODO(state, id) {
      state.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    REMOVE_TODO(state, index) {
      state.todos.splice(index, 1);
    },
    CLEAR_ALL(state) {
      // 완료된 항목만 삭제하도록 수정
      state.todos = state.todos.filter((todo) => !todo.done);
    },
  },
  actions: {
    addTodo(context, todo) {
      context.commit('ADD_TODO', todo);
    },
    checkTodo(context, id) {
      context.commit('CHECK_TODO', id);
    },
    removeTodo(context, index) {
      context.commit('REMOVE_TODO', index);
    },
    clearAll(context) {
      context.commit('CLEAR_ALL');
    },
  },
});
