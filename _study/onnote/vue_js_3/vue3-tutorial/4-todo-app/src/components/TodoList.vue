<template>
  <div>
    <ul>
      <li>todoItem1 <button>삭제</button></li>
      <li>todoItem2 <button>삭제</button></li>
      <li>todoItem3 <button>삭제</button></li>
      <li>todoItem4 <button>삭제</button></li>
    </ul>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoList',
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
  background-color: PapayaWhip;
}
</style>
