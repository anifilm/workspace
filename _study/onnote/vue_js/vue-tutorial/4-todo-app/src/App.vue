<template>
  <v-app>
    <v-app-bar app color="primary" dark>
      <v-app-bar-nav-icon></v-app-bar-nav-icon>
      <TodoHeader />
    </v-app-bar>

    <v-main>
      <TodoInput v-on:addTodo="onAddTodo" />
      <TodoList v-bind:todoItems="todoItems" v-on:removeTodo="onRemoveTodo" />
    </v-main>

    <v-footer app>
      <TodoFooter v-on:clearDone="onClearDone" />
    </v-footer>
  </v-app>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import TodoHeader from '@/components/TodoHeader';
import TodoInput from '@/components/TodoInput';
import TodoList from '@/components/TodoList';
import TodoFooter from '@/components/TodoFooter';

export default {
  name: 'App',
  components: {
    TodoHeader,
    TodoInput,
    TodoList,
    TodoFooter,
  },
  computed: {
    //todoItems() {
    //  return this.$store.state.todoItems;
    //}
    ...mapState(['todoItems']),
  },
  methods: {
    ...mapActions(['addTodo', 'removeTodo', 'clearDone']),
    onAddTodo(todoItem) {
      this.addTodo(todoItem);
    },
    onRemoveTodo(todoItem, index) {
      this.removeTodo(index);
    },
    onClearDone() {
      this.clearDone();
    },
  },
};
</script>
