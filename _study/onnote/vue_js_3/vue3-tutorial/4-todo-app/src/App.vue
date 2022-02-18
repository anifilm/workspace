<template>
  <TodoHeader></TodoHeader>
  <TodoInput v-on:add-todo="addTodo"></TodoInput>
  <TodoList v-bind:todos="todos" v-on:remove-todo="removeTodo"></TodoList>
  <TodoFooter v-on:clear-all="clearAll"></TodoFooter>
</template>

<script>
import { computed } from 'vue';
import { useStore } from 'vuex';

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
    const store = useStore();
    const todos = computed(() => store.state.todos);

    const addTodo = (todo) => {
      //todos.value.push(todo);
      store.dispatch('addTodo', todo);
    };
    const removeTodo = (index) => {
      //todos.value.splice(index, 1);
      store.dispatch('removeTodo', index);
    };
    const clearAll = () => {
      //todos.value.length = 0;
      store.dispatch('clearAll')
    };

    return {
      todos,
      addTodo,
      removeTodo,
      clearAll,
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
