import api from '../api';
import {
  FETCH_BOARD_LIST,
  FETCH_BOARD,
} from './mutation-types';

export default {
  fetchBoardList({ commit }) {
    return api.get('/boards').then((res) => {
      commit(FETCH_BOARD_LIST, res.data);
    });
  },
  fetchBoard({ commit }, boardNo) {
    return api.get(`/boards/${boardNo}`)
      .then((res) => {
        commit(FETCH_BOARD, res.data);
      });
  },
};
