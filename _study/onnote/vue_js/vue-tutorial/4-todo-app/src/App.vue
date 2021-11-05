<template>
  <v-app>
    <v-app-bar app color="primary" dark>
      <v-app-bar-nav-icon></v-app-bar-nav-icon>
      <TodoHeader />
    </v-app-bar>

    <v-main>
      <TodoInput v-on:addTodo="addTodo" />
      <TodoList v-bind:todoItems="todoItems" v-on:removeTodo="removeTodo" />
    </v-main>

    <v-footer app>
      <TodoFooter v-on:clearDone="clearDone" />
    </v-footer>
  </v-app>
</template>

<script>
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
    TodoFooter
  },
  data() {
    return {
      todoItems: [
        '아침먹기',
        '점심먹기',
        '저녁먹기'
      ]
    }
  },
  methods: {
    clearDone() {
      this.todoItems = [];
    },
    addTodo(todoItem) {
      this.todoItems.push(todoItem);
    },
    removeTodo(todoItem, index) {
      this.todoItems.splice(index, 1);
    }
  }
};
</script>
