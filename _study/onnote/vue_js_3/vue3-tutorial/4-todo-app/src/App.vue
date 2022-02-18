<template>
  <TodoHeader></TodoHeader>
  <TodoInput v-on:add-todo="addTodo"></TodoInput>
  <TodoList v-bind:todos="todos" v-on:remove-todo="removeTodo"></TodoList>
  <TodoFooter v-on:remove-all="clearAll"></TodoFooter>
</template>

<script>
import { ref } from 'vue';

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
  setup() {
    const todos = ref([]);

    const clearAll = () => {
      todos.value.length = 0;
    };
    const addTodo = (todo) => {
      todos.value.push(todo);
    };
    const removeTodo = (index) => {
      todos.value.splice(index, 1);
    };

    return {
      todos,
      clearAll,
      addTodo,
      removeTodo,
    };
  },
};
</script>

<style>
body {
  text-align: center;
  background-color: SteelBlue;
}
</style>
