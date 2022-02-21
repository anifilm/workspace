<template>
  <div>
    <button v-on:click="clearTodo">완료 항목 삭제</button>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class TodoFooter extends Vue {
  clearTodo() {
    console.log('clearTodo');
  }
}
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
