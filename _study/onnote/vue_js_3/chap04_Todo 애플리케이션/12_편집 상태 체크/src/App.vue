<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:add-todo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-bind:editingId="editingId"
      v-on:check-todo="checkTodo"
      v-on:set-editing-id="setEditingId"
      v-on:reset-editing-id="resetEditingId"
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
    const editingId = computed(() => store.state.editingId);

    const addTodo = (todo) => {
      store.dispatch('addTodo', todo);
      store.dispatch('save');
    };
    const checkTodo = (id) => {
      store.dispatch('checkTodo', id);
      store.dispatch('save');
    };
    // 편집 중인 Todo 항목 ID 설정
    const setEditingId = (id) => {
      store.dispatch('setEditingId', id);
    };
    // 편집 중인 Todo 항목 ID 리셋
    const resetEditingId = () => {
      store.dispatch('resetEditingId');
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
      editingId,
      addTodo,
      checkTodo,
      setEditingId,
      resetEditingId,
      updateTodo,
      removeTodo,
      clearAll,
    };
  },
};
</script>
