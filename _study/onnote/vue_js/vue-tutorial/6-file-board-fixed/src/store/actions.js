import api from '@/api';
import {
  FETCH_ITEM_LIST,
  FETCH_ITEM,
} from './mutation-types';

export default {
  fetchItemList({ commit }) {
    return api.get('/items').then((res) => {
      commit(FETCH_ITEM_LIST, res.data);
    });
  },
  fetchItem({ commit }, itemId) {
    return api.get(`/items/${itemId}`)
      .then((res) => {
        commit(FETCH_ITEM, res.data);
      });
  },
};
