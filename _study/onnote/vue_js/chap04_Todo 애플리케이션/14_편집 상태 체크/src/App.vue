<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todos="todos"
      v-bind:editingId="editingId"
      v-on:checkTodo="onCheckTodo"
      v-on:setEditingId="SET_EDITING_ID"
      v-on:resetEditingId="RESET_EDITING_ID"
      v-on:updateTodo="onUpdateTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script>
import { mapState, mapActions, mapMutations } from 'vuex';
import { SET_EDITING_ID, RESET_EDITING_ID } from './store/mutation-types';

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
    ...mapState(['todos', 'editingId']),
  },
  methods: {
    ...mapMutations([
      SET_EDITING_ID,
      RESET_EDITING_ID,
    ]),
    ...mapActions([
      'addTodo',
      'checkTodo',
      'updateTodo',
      'removeTodo',
      'clearAll',
      'save',
      'restore',
    ]),
    onAddTodo(todo) {
      this.addTodo(todo);
      this.save();
    },
    onCheckTodo(id) {
      this.checkTodo(id);
      this.save();
    },
    onUpdateTodo(id, content) {
      this.updateTodo({ id, content });
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
