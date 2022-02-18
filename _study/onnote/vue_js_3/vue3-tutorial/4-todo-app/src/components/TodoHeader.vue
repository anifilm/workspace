<template>
  <div>
    <h1>TODO Application</h1>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoHeader',
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
  background-color: LightGreen;
}
</style>
