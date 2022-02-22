<template>
  <div>
    <button v-on:click="clearAll">완료 항목 삭제</button>
  </div>
</template>

<script>
export default {
  name: 'TodoFooter',
  emits: ['clear-all'],
  setup(props, context) {
    const clearAll = () => {
      console.log('clearAll');
      context.emit('clear-all');
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
