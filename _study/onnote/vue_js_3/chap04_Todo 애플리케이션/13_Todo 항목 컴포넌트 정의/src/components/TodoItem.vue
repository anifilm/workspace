<template>
  <div>
    <li>
      <input
        type="checkbox"
        v-bind:checked="todo.done"
        v-on:change="checkTodo"
      />
      <span
        v-if="!isEditing"
        v-on:dblclick="handleDblClick"
      >{{ todo.text }}</span>
      <input
        v-else
        type="text"
        v-bind:ref="(el) => editInput[0] = el"
        v-bind:value="todo.text"
        v-on:blur="handleBlur"
        v-on:keydown.enter="updateTodo"
      />
      <button v-on:click="removeTodo">삭제</button>
    </li>
  </div>
</template>

<script>
import { ref, computed, nextTick } from 'vue';

export default {
  name: 'TodoItem',
  props: ['todo', 'editingId'],
  emits: [
    'check-todo',
    'set-editing-id',
    'reset-editing-id',
    'update-todo',
    'remove-todo',
  ],
  setup(props, context) {
    const todo = props.todo;
    const isEditing = computed(() => todo.id === props.editingId);
    const editInput = ref([]);

    const checkTodo = () => {
      const id = todo.id;
      //console.log('checkTodo', id);
      context.emit('check-todo', id);
    };
    const updateTodo = (e) => {
      const id = todo.id;
      const content = e.target.value.trim();
      if (content.length <= 0) return false;
      //console.log('updateTodo', id, content);
      context.emit('update-todo', id, content);
      editInput.value[0].blur();
    };
    const removeTodo = () => {
      const id = todo.id;
      //console.log('removeTodo', id);
      context.emit('remove-todo', id);
    };
    const handleDblClick = () => {
      const id = todo.id;
      context.emit('set-editing-id', id);
      nextTick(() => {
        editInput.value[0].focus();
      });
    };
    const handleBlur = () => {
      context.emit('reset-editing-id');
    };

    return {
      isEditing,
      editInput,
      checkTodo,
      updateTodo,
      removeTodo,
      handleDblClick,
      handleBlur,
    };
  },
};
</script>

<style scoped>
span, input {
  margin: 10px;
}
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
