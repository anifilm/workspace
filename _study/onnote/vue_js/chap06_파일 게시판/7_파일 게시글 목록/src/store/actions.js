import api from '@/api';
import {
  FETCH_ITEM_LIST,
} from './mutation-types';

export default {
  fetchItemList({ commit }) {
    return api.get('/items').then((res) => {
      commit(FETCH_ITEM_LIST, res.data);
    });
  },
};
