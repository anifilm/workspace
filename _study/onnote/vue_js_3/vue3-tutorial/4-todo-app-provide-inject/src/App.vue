<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:add-todo="handleAddTodo" />
    <TodoFilter v-bind:filter="filter" v-on:set-filter="handleSetFilter" />
    <TodoList
      v-bind:todos="filteredTodos"
      v-bind:editingId="editingId"
      v-on:check-todo="handleCheckTodo"
      v-on:set-editing-id="handleSetEditingId"
      v-on:reset-editing-id="handleResetEditingId"
      v-on:update-todo="handleUpdateTodo"
      v-on:remove-todo="handleRemoveTodo"
    />
    <TodoFooter v-on:clear-all="handleClearAll" />
  </div>
</template>

<script>
import { useTodos } from './compositions/useTodos.js';

import TodoHeader from './components/TodoHeader.vue';
import TodoInput from './components/TodoInput.vue';
import TodoFilter from './components/TodoFilter.vue';
import TodoList from './components/TodoList.vue';
import TodoFooter from './components/TodoFooter.vue';

export default {
  name: 'App',
  components: {
    TodoHeader,
    TodoInput,
    TodoFilter,
    TodoList,
    TodoFooter,
  },
  setup() {
    const {
      todos,
      editingId,
      filter,
      filteredTodos,
      addTodo,
      checkTodo,
      setEditingId,
      resetEditingId,
      updateTodo,
      removeTodo,
      clearAll,
      setFilter,
      save,
      restore,
    } = useTodos();

    const handleAddTodo = (todo) => {
      addTodo(todo);
      save();
    };
    const handleCheckTodo = (id) => {
      checkTodo(id);
      save();
    };
    // 편집 중인 Todo 항목 ID 설정
    const handleSetEditingId = (id) => {
      setEditingId(id);
    };
    // 편집 중인 Todo 항목 ID 리셋
    const handleResetEditingId = () => {
      resetEditingId();
    };
    const handleUpdateTodo = (id, content) => {
      updateTodo({ id, content });
      save();
    };
    const handleRemoveTodo = (id) => {
      removeTodo(id);
      save();
    };
    const handleClearAll = () => {
      clearAll();
      save();
    };
    const handleSetFilter = (filter) => {
      setFilter(filter);
    };

    // 컴포지션 모듈 사용
    restore();

    return {
      todos,
      editingId,
      filter,
      filteredTodos,
      handleAddTodo,
      handleCheckTodo,
      handleSetEditingId,
      handleResetEditingId,
      handleUpdateTodo,
      handleRemoveTodo,
      handleClearAll,
      handleSetFilter,
    };
  },
};
</script>
