<template>
  <div>
    <ul>
      <li>todoItem1<button>삭제</button></li>
      <li>todoItem2<button>삭제</button></li>
      <li>todoItem3<button>삭제</button></li>
    </ul>
  </div>
</template>

<script>
export default {
  data() {
    return {
      counter: 0
    };
  }
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
</style>
