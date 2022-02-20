<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todoItems="todoItems"
      v-on:checkTodo="onCheckTodo"
      v-on:editTodo="onEditTodo"
      v-on:updateTodo="onUpdateTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

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
  computed: {
    ...mapState(['todoItems']),
  },
  methods: {
    ...mapActions([
      'addTodo',
      'checkTodo',
      'editTodo',
      'updateTodo',
      'removeTodo',
      'clearAll',
      'save',
      'restore',
    ]),
    onAddTodo(todoItem) {
      this.addTodo(todoItem);
      this.save();
    },
    onCheckTodo(id) {
      this.checkTodo(id);
      this.save();
    },
    onEditTodo(id) {
      this.editTodo(id);
    },
    onUpdateTodo(id, content) {
      this.updateTodo({ id, content });
      this.save();
    },
    onRemoveTodo(id) {
      this.removeTodo(id);
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
