import api from '../api';
import {
  FETCH_BOARD_LIST,
} from './mutation-types';

export default {
  fetchBoardList({ commit }) {
    return api.get('/boards').then((res) => {
      commit(FETCH_BOARD_LIST, res.data);
    });
  },
};
