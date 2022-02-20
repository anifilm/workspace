<template>
  <div>
    <input type="text" v-model="newTodo" v-on:keypress.enter="addTodo" />
    <button v-on:click="addTodo">추가</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoInput',
  emits: ['add-todo'],
  setup(props, context) {
    const newTodo = ref('');

    const addTodo = () => {
      if (newTodo.value !== '') {
        const inputValue = newTodo.value && newTodo.value.trim();
        //console.log('addTodo inputValue', inputValue);
        context.emit('add-todo', inputValue);
        clearInput();
      }
    };
    const clearInput = () => {
      newTodo.value = '';
    };

    return {
      newTodo,
      addTodo,
      clearInput,
    };
  },
};
</script>

<style scoped>
div {
  background-color: Pink;
}
button {
  margin: 5px;
}
</style>
