<template>
  <div>
    <ul>
      <TodoItem v-for="todo in todos"
        v-bind:key="todo.id"
        v-bind:todo="todo"
        v-bind:editingId="editingId"
        v-on:check-todo="onCheckTodo"
        v-on:set-editing-id="setEditingId"
        v-on:reset-editing-id="resetEditingId"
        v-on:update-todo="onUpdateTodo"
        v-on:remove-todo="onRemoveTodo"
      />
    </ul>
  </div>
</template>

<script>
import TodoItem from './TodoItem.vue';

export default {
  name: 'TodoList',
  components: {
    TodoItem,
  },
  props: ['todos', 'editingId'],
  emits: [
    'check-todo',
    'set-editing-id',
    'reset-editing-id',
    'update-todo',
    'remove-todo'
  ],
  setup(props, context) {
    const onCheckTodo = (id) => {
      context.emit('check-todo', id);
    };
    const setEditingId = (id) => {
      context.emit('set-editing-id', id);
    }
    const resetEditingId = () => {
      context.emit('reset-editing-id');
    }
    const onUpdateTodo = (id, content) => {
      context.emit('update-todo', id, content);
    };
    const onRemoveTodo = (id) => {
      context.emit('remove-todo', id);
    };

    return {
      onCheckTodo,
      setEditingId,
      resetEditingId,
      onUpdateTodo,
      onRemoveTodo,
    };
  },
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span, input {
  margin: 10px;
}
ul {
  list-style: none;
  padding-left: 0px;
}
</style>
