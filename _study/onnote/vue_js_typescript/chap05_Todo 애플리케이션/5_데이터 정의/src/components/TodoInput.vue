<template>
  <div>
    <input type="text" v-model="newTodoItem" />
    <button>추가</button>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class TodoInput extends Vue {
  newTodoItem: string = '';
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
