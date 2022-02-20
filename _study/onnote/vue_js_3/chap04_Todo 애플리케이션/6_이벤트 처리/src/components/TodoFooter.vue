<template>
  <div>
    <button v-on:click="clearAll">완료 항목 삭제</button>
  </div>
</template>

<script>
export default {
  name: 'TodoFooter',
  setup() {
    const clearAll = () => {
      console.log('clearAll');
    };

    return {
      clearAll,
    };
  },
};
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
