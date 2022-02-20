<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="addTodo" />
    <TodoList
      v-bind:todoItems="todoItems"
      v-on:checkTodo="checkTodo"
      v-on:removeTodo="removeTodo"
    />
    <TodoFooter v-on:clearAll="clearAll" />
  </div>
</template>

<script>
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
    todoItems() {
      return this.$store.state.todoItems;
    },
  },
  methods: {
    addTodo(todoItem) {
      this.$store.dispatch('addTodo', todoItem);
    },
    checkTodo(id) {
      this.$store.dispatch('checkTodo', id);
    },
    removeTodo(index) {
      this.$store.dispatch('removeTodo', index);
    },
    clearAll() {
      this.$store.dispatch('clearAll');
    },
  },
};
</script>
