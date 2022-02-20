<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:add-todo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:check-todo="checkTodo"
      v-on:update-todo="updateTodo"
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
      const isEditing = false;
      const content = {
        isEditing,
        text: todo,
      };
      store.dispatch('addTodo', content);
      store.dispatch('save');
    };
    const checkTodo = (id) => {
      store.dispatch('checkTodo', id);
      store.dispatch('save');
    };
    const updateTodo = (id, content) => {
      store.dispatch('updateTodo', { id, content });
      store.dispatch('save');
    }
    const removeTodo = (index) => {
      store.dispatch('removeTodo', index);
      store.dispatch('save');
    };
    const clearAll = () => {
      store.dispatch('clearAll');
      store.dispatch('save');
    };

    store.dispatch('restore');

    return {
      todos,
      addTodo,
      checkTodo,
      updateTodo,
      removeTodo,
      clearAll,
    };
  },
};
</script>
