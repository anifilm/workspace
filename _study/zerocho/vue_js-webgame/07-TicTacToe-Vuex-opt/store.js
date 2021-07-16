import Vue from 'vue';
import Vuex from 'vuex';

Vue.use(Vuex);

export const CLICK_CELL = 'CLICK_CELL';
export const CHANGE_TURN = 'CHANGE_TURN';
export const SET_WINNER = 'SET_WINNER';
export const NO_WINNER = 'NO_WINNER';
export const RESET_GAME = 'RESET_GAME';

export default new Vuex.Store({
  // data
  state: {
    tableData: [
      ['', '', ''],
      ['', '', ''],
      ['', '', '']
    ],
    turn: 'O',
    winner: '',
    win: false,
    draw: false
  },
  // computed
  getters: {
    turnMessage(state) {
      return state.turn + '님이 승리하셨습니다.';
    }
  },
  // state를 수정할 때 사용 (동기적으로)
  mutations: {
    [CLICK_CELL](state, { row, cell }) {
      Vue.set(state.tableData[row], cell, state.turn);
    },
    [CHANGE_TURN](state) {
      state.turn = state.turn === 'O' ? 'X' : 'O';
    },
    [SET_WINNER](state, winner) {
      state.winner = winner;
      state.win = true;
    },
    [NO_WINNER](state) {
      state.winner = '';
      state.draw = true;
    },
    [RESET_GAME](state) {
      state.tableData = [
        ['', '', ''],
        ['', '', ''],
        ['', '', '']
      ];
      state.turn = 'O';
      state.winner = '';
      state.win = false;
      state.draw = false;
    }
  },
  // 비동기를 사용하거나 여러 뮤테이션을 연달아 실행할 때
  actions: {
    // ...
  }
});
