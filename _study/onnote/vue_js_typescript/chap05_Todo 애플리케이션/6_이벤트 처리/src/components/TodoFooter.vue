<template>
  <div>
    <button v-on:click="clearTodo">완료 항목 삭제</button>
  </div>
</template>

<script>
export default {
  methods: {
    clearTodo() {
      console.log('clearTodo');
    }
  }
};
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
