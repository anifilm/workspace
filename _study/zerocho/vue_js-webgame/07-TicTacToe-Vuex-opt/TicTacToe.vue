<template>
  <div>
    <div>{{ turn }}님의 턴입니다.</div>
    <table-component>
      <tr v-for="(rowData, rowIndex) in tableData" :key="rowIndex">
        <td
          @click="onClickTd(rowIndex, cellIndex)"
          v-for="(cellData, cellIndex) in rowData"
          :key="cellIndex"
        >
          {{ cellData }}
        </td>
      </tr>
    </table-component>

    <div v-if="winner">
      {{ winner }}님의 승리!<br />
      <button @click="onClickReset">다시하기</button>
    </div>
    <div v-else-if="draw">
      무승부입니다.<br />
      <button @click="onClickReset">다시하기</button>
    </div>
  </div>
</template>

<script>
import { mapState } from 'vuex';
import { CLICK_CELL, CHANGE_TURN, SET_WINNER, NO_WINNER, RESET_GAME } from './store';
import TableComponent from './TableComponent';

export default {
  components: {
    TableComponent,
  },
  computed: {
    ...mapState(['tableData', 'turn', 'winner', 'draw', 'win'])
  },
  methods: {
    onClickTd(rowIndex, cellIndex) {
      if (this.tableData[rowIndex][cellIndex] || this.win) return;

      this.$store.commit('CLICK_CELL', { row: rowIndex, cell: cellIndex });

      let win = false;
      if (
        this.tableData[rowIndex][0] === this.turn &&
        this.tableData[rowIndex][1] === this.turn &&
        this.tableData[rowIndex][2] === this.turn
      ) {
        win = true;
      }
      if (
        this.tableData[0][cellIndex] === this.turn &&
        this.tableData[1][cellIndex] === this.turn &&
        this.tableData[2][cellIndex] === this.turn
      ) {
        win = true;
      }
      if (
        this.tableData[0][0] === this.turn &&
        this.tableData[1][1] === this.turn &&
        this.tableData[2][2] === this.turn
      ) {
        win = true;
      }
      if (
        this.tableData[0][2] === this.turn &&
        this.tableData[1][1] === this.turn &&
        this.tableData[2][0] === this.turn
      ) {
        win = true;
      }

      if (win) { // 이긴 경우: 3줄 달성
        this.$store.commit(SET_WINNER, this.turn);
      } else { // 무승부
        let all = true; // all이 true면 무승부라는 뜻
        this.tableData.forEach(row => { // 무승부 검사
          row.forEach(cell => {
            if (!cell) {
              all = false;
            }
          });
        });
        if (all) { // 무승부
          this.$store.commit(NO_WINNER);
        } else {
          this.$store.commit(CHANGE_TURN);
        }
      }
    },
    onClickReset() {
      this.$store.commit(RESET_GAME);
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
