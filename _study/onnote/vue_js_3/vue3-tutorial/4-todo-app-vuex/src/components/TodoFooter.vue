<template>
  <div>
    <button v-on:click="clearTodo">모두 삭제</button>
  </div>
</template>

<script>
export default {
  name: 'TodoFooter',
  emits: ['clear-all'],
  setup(props, context) {
    const clearTodo = () => {
      //console.log('clearAll');
      context.emit('clear-all');
    };

    return {
      clearTodo,
    };
  },
};
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
