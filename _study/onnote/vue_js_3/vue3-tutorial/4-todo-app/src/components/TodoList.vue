<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        {{ todo }} <button v-on:click="removeTodo(index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoList',
  setup() {
    const todos = ref(['todo1', 'todo2', 'todo3']);

    const removeTodo = (index) => {
      console.log('removeTodo');
      todos.value.splice(index, 1);
    }

    return {
      todos,
      removeTodo,
    };
  },
};
</script>

<style scoped>
div {
  background-color: PapayaWhip;
}
</style>
