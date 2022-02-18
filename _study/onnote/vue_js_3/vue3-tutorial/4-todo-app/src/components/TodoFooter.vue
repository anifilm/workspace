<template>
  <div>
    <button>모두 삭제</button>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoFooter',
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
  background-color: AliceBlue;
}
</style>
