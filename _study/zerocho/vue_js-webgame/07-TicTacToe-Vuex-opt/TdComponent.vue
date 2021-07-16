<template>
  <td @click="onClickTd">{{ cellData }}</td>
</template>

<script>
import { mapState } from 'vuex';
import { CLICK_CELL, CHANGE_TURN, SET_WINNER, NO_WINNER, RESET_GAME } from './store';

export default {
  props: {
    rowIndex: Number,
    cellIndex: Number
  },
  computed: {
    ...mapState({
      cellData(state) {
        return state.tableData[this.rowIndex][this.cellIndex];
      },
      tableData: state => state.tableData,
      turn: state => state.turn,
      win: state => state.win
    })
    //cellData() {
    //  return this.$store.state.tableData[this.rowIndex][this.cellIndex];
    //},
    //tableData() {
    //  return this.$store.state.tableData;
    //},
    //turn() {
    //  return this.$store.state.turn;
    //},
    //win() {
    //  return this.$store.state.win;
    //}
  }
};
</script>
