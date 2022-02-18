<template>
  <div>
    <button v-on:click="clearTodo">모두 삭제</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoFooter',
  setup() {
    const clearTodo = () => {
      console.log('clearTodo');
    }

    return {
      clearTodo
    };
  }
};
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
