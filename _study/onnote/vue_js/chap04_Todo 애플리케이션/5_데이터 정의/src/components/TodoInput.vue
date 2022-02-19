<template>
  <div>
    <input type="text" v-model="newTodoItem" />
    <button>추가</button>
  </div>
</template>

<script>
export default {
  data() {
    return {
      newTodoItem: '',
    };
  },
};
</script>

<style scoped>
div {
  background-color: Pink;
}
button {
  margin: 5px;
}
</style>
