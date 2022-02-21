<template>
  <div>
    <button v-on:click="clearAll">완료 항목 삭제</button>
  </div>
</template>

<script>
export default {
  methods: {
    clearAll() {
      //console.log('clearAll');
      this.$emit('clearAll');
    }
  }
};
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
