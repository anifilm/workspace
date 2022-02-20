<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todoItems="todoItems"
      v-on:checkTodo="onCheckTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

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
    ...mapState(['todoItems']),
  },
  methods: {
    ...mapActions([
      'addTodo',
      'checkTodo',
      'removeTodo',
      'clearAll',
    ]),
    onAddTodo(todoItem) {
      this.addTodo(todoItem);
    },
    onCheckTodo(id) {
      this.checkTodo(id);
    },
    onRemoveTodo(index) {
      this.removeTodo(index);
    },
    onClearAll() {
      this.clearAll();
    },
  },
};
</script>
