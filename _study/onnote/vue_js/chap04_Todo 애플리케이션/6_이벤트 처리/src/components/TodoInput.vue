<template>
  <div>
    <input type="text" v-model="newTodoItem" v-on:keypress.enter="addTodo" />
    <button v-on:click="addTodo">추가</button>
  </div>
</template>

<script>
export default {
  data() {
    return {
      newTodoItem: '',
    };
  },
  methods: {
    addTodo() {
      if (this.newTodoItem !== '') {
        const value = this.newTodoItem && this.newTodoItem.trim();
        console.log('addTodo');
        this.clearInput();
      }
    },
    clearInput() {
      this.newTodoItem = '';
    },
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
