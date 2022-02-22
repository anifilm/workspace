<template>
  <div>
    <ul>
      <TodoItem v-for="todo in todos"
        v-bind:key="todo.id"
        v-bind:todo="todo"
        v-bind:editingId="editingId"
        v-on:checkTodo="onCheckTodo"
        v-on:setEditingId="SET_EDITING_ID"
        v-on:resetEditingId="RESET_EDITING_ID"
        v-on:updateTodo="onUpdateTodo"
        v-on:removeTodo="onRemoveTodo"
      />
    </ul>
  </div>
</template>

<script>
import { mapState, mapMutations } from 'vuex';
import { RESET_EDITING_ID, SET_EDITING_ID } from '../store/mutation-types';

import TodoItem from './TodoItem.vue';

export default {
  components: {
    TodoItem,
  },
  computed: {
    ...mapState(['todos', 'editingId'])
  },
  methods: {
    ...mapMutations([
      SET_EDITING_ID,
      RESET_EDITING_ID,
    ]),
    onCheckTodo(id) {
      this.$emit('checkTodo', id);
    },
    onUpdateTodo(id, content) {
      this.$emit('updateTodo', id, content);
    },
    onRemoveTodo(id) {
      this.$emit('removeTodo', id);
    },
  },
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
ul {
  list-style: none;
  padding-left: 0px;
}
</style>
