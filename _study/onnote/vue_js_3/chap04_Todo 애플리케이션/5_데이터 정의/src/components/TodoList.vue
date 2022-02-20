<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input type="checkbox" />
        <span>{{ todo }}</span>
        <button>삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
import { ref } from 'vue';

export default {
  name: 'TodoList',
  setup() {
    const todos = ref(['todoItem1', 'todoItem2', 'todoItem3']);

    return {
      todos,
    };
  },
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span {
  margin: 10px;
}
ul {
  list-style: none;
  padding-left: 0px;
}
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
