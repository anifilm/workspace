<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-on:checkTodo="onCheckTodo"
      v-on:updateTodo="onUpdateTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script>
import { mapActions } from 'vuex';

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
  methods: {
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
