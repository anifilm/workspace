<template>
  <div>
    <input type="text" v-model="newTodo" />
    <button>추가</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoInput',
  setup() {
    const newTodo = ref('');

    return {
      newTodo,
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
