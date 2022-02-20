<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:checkTodo="checkTodo"
      v-on:removeTodo="removeTodo"
    />
    <TodoFooter v-on:clearAll="clearAll" />
  </div>
</template>

<script>
import store from './store';

import TodoHeader from './components/TodoHeader.vue';
import TodoInput from './components/TodoInput.vue';
import TodoList from './components/TodoList.vue';
import TodoFooter from './components/TodoFooter.vue';

export default {
  name: 'App',
  components: {
    TodoHeader,
    TodoInput,
    TodoList,
    TodoFooter,
  },
  computed: {
    todos() {
      return store.state.todos;
    },
  },
  methods: {
    addTodo(todo) {
      store.dispatch('addTodo', todo);
    },
    checkTodo(id) {
      store.dispatch('checkTodo', id);
    },
    removeTodo(index) {
      store.dispatch('removeTodo', index);
    },
    clearAll() {
      store.dispatch('clearAll');
    },
  },
};
</script>
