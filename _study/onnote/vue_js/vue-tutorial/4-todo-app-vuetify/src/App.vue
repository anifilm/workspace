<template>
  <v-app>
    <v-app-bar app color="primary" dark>
      <v-app-bar-nav-icon></v-app-bar-nav-icon>
      <TodoHeader />
    </v-app-bar>

    <v-main>
      <TodoInput v-on:addTodo="onAddTodo" />
      <TodoList v-bind:todos="todos" v-on:removeTodo="onRemoveTodo" />
    </v-main>

    <v-footer app>
      <TodoFooter v-on:clearAll="onClearAll" />
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
    ...mapState(['todos']),
  },
  methods: {
    ...mapActions(['addTodo', 'removeTodo', 'clearAll', 'save', 'restore']),
    onAddTodo(todo) {
      this.addTodo(todo);
      this.save();
    },
    onRemoveTodo(index) {
      this.removeTodo(index);
      this.save();
    },
    onClearAll() {
      this.clearAll();
      this.save();
    },
  },
  created() {
    this.restore();
  },
};
</script>
