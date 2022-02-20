<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:add-todo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:check-todo="checkTodo"
      v-on:remove-todo="removeTodo"
    />
    <TodoFooter v-on:clear-all="clearAll" />
  </div>
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
    const store = useStore(); // 스토어를 가져온다.

    // computed 속성 정의
    const todos = computed(() => store.state.todos);

    const addTodo = (todo) => {
      store.dispatch('addTodo', todo);
    };
    const checkTodo = (id) => {
      store.dispatch('checkTodo', id);
    };
    const removeTodo = (id) => {
      store.dispatch('removeTodo', id);
    };
    const clearAll = () => {
      store.dispatch('clearAll');
    };

    return {
      todos,
      addTodo,
      checkTodo,
      removeTodo,
      clearAll,
    };
  },
};
</script>
