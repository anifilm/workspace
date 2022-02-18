<template>
  <div>
    <input type="text">
    <button>추가</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoInput',
  setup() {
    let counter = ref(0);

    return {
      counter
    };
  }
};
</script>

<style scoped>
div {
  background-color: PaleVioletRed;
}
</style>
