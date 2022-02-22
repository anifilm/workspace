<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todo.done"
          v-on:change="checkTodo(todo.id)"
        />
        <span
          v-if="!isEditing(todo.id)"
          v-on:dblclick="handleDblClick(index, todo.id)"
        >{{ todo.text }}</span>
        <input
          v-else
          type="text"
          v-bind:ref="(el) => editInput[index] = el"
          v-bind:value="todo.text"
          v-on:blur="handleBlur()"
          v-on:keydown.enter="updateTodo(index, todo.id, $event)"
        />
        <button v-on:click="removeTodo(index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
import { ref, nextTick } from 'vue';

export default {
  name: 'TodoList',
  props: ['todos', 'editingId'],
  emits: ['check-todo', 'update-todo', 'remove-todo'],
  setup(props, context) {
    const todos = props.todos;
    const editInput = ref([]);

    const checkTodo = (id) => {
      console.log('checkTodo');
      context.emit('check-todo', id);
    };
    const updateTodo = (index, id, e) => {
      const content = e.target.value.trim();
      if (content.length <= 0) return false;
      console.log('updateTodo');
      context.emit('update-todo', id, content);
      editInput.value[index].blur();
    };
    const isEditing = (id) => {
      if (id === props.editingId) {
        return true;
      }
      return false;
    }
    const removeTodo = (index) => {
      console.log('removeTodo');
      context.emit('remove-todo', index);
    };
    const handleDblClick = (index, id) => {
      context.emit('set-editing-id', id);
      nextTick(() => {
        editInput.value[index].focus();
      });
    };
    const handleBlur = () => {
      context.emit('reset-editing-id');
    };
    return {
      checkTodo,
      updateTodo,
      isEditing,
      removeTodo,
      handleDblClick,
      handleBlur,
      editInput,
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
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
