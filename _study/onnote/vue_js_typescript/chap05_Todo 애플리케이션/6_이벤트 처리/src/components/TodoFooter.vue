<template>
  <div>
    <button v-on:click="clearAll">완료 항목 삭제</button>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class TodoFooter extends Vue {
  clearAll() {
    console.log('clearAll');
  }
}
</script>

<style scoped>
div {
  background-color: AliceBlue;
}
</style>
