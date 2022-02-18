<template>
  <div>
    <input type="text" v-model="newTodo" v-on:keypress.enter="addTodo" />
    <button>추가</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoInput',
  setup() {
    const newTodo = ref('');

    const addTodo = () => {
      if (newTodo.value !== '') {
        const inputValue = newTodo.value && newTodo.value.trim();
        console.log('addTodo inputValue', inputValue);
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
  background-color: PaleVioletRed;
}
</style>
