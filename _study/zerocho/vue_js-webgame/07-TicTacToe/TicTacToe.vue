<template>
  <div>
    <div>{{ turn }}님의 턴입니다.</div>
    <table-component :table-data="tableData"></table-component>
    <div v-if="winner">{{ winner }}님의 승리!</div>
    <div v-else-if="draw">무승부입니다.</div>
  </div>
</template>

<script>
import TableComponent from './TableComponent.vue';

export default {
  components: {
    TableComponent
  },
  data() {
    return {
      tableData: [
        ['', '', ''],
        ['', '', ''],
        ['', '', '']
      ],
      turn: 'O',
      winner: '',
      draw: false
    };
  },
  methods: {
    onChangeData() {
    //this.tableData[1][0] = 'X'; // 작동하지 않음
      this.$set(this.tableData[1], 0, 'X'); // Vue.set과 동일
    }
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
