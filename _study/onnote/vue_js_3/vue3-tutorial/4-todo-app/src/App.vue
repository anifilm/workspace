<template>
  <TodoHeader></TodoHeader>
  <TodoInput v-on:add-todo="addTodo"></TodoInput>
  <TodoList
    v-bind:todos="todos"
    v-on:update-todo="editTodo"
    v-on:remove-todo="removeTodo"
  ></TodoList>
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

    const addTodo = (content) => {
      const isEditing = false;
      const todo = { isEditing, content };
      //todos.value.push(todo);
      store.dispatch('addTodo', todo);
      store.dispatch('save');
    };
    const editTodo = (content, index) => {
      store.dispatch('editTodo', { content, index });
      store.dispatch('save');
    };
    const removeTodo = (index) => {
      //todos.value.splice(index, 1);
      store.dispatch('removeTodo', index);
      store.dispatch('save');
    };
    const clearAll = () => {
      //todos.value.length = 0;
      store.dispatch('clearAll');
      store.dispatch('save');
    };

    store.dispatch('restore');

    return {
      todos,
      addTodo,
      editTodo,
      removeTodo,
      clearAll,
    };
  },
};
</script>
