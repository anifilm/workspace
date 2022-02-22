<template>
  <div>
    <input type="text" v-model="newTodo" v-on:keypress.enter="addTodo" />
    <button v-on:click="addTodo">추가</button>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class TodoInput extends Vue {
  newTodo: string = '';

  addTodo() {
    if (this.newTodo !== '') {
      const value = this.newTodo && this.newTodo.trim();
      //console.log('addTodo', value);
      this.$emit('addTodo', value);
      this.clearInput();
    }
  }
  clearInput() {
    this.newTodo = '';
  }
}
</script>

<style scoped>
div {
  background-color: Pink;
}
button {
  margin: 5px;
}
</style>
