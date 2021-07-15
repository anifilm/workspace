<template>
  <div>
    <div>{{ turn }}님의 턴입니다.</div>
    <table-component />
    <div v-if="winner">{{ winner }}님의 승리!</div>
    <div v-else-if="draw">무승부입니다.</div>
  </div>
</template>

<script>
import { mapState } from 'vuex';
import TableComponent from './TableComponent.vue';

export default {
  components: {
    TableComponent
  },
  computed: {
    ...mapState(['winner', 'turn', 'draw'])
  }
};
</script>

<style>
table {
  border-collapse: collapse;
}
td {
  border: 1px solid black;
  width: 40px;
  height: 40px;
  text-align: center;
}
</style>
