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
          v-if="!todo.content.isEditing"
          v-on:dblclick="handleDblClick(index)"
        >
          {{ todo.content.text }}
        </span>
        <input
          v-else
          type="text"
          v-bind:ref="(el) => editInput[index] = el"
          v-bind:value="todo.content.text"
          v-on:blur="handleBlur(index)"
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
  props: ['todos'],
  emits: ['check-todo', 'remove-todo'],
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
    const removeTodo = (index) => {
      console.log('removeTodo');
      context.emit('remove-todo', index);
    };
    const handleDblClick = (index) => {
      todos[index].content.isEditing = true;
      nextTick(() => {
        editInput.value[index].focus();
      });
    };
    const handleBlur = (index) => {
      todos[index].content.isEditing = false;
    };
    return {
      checkTodo,
      updateTodo,
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
