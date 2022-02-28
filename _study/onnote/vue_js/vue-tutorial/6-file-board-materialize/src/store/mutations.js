import {
  FETCH_ITEM_LIST,
  FETCH_ITEM,
} from './mutation-types';

export default {
  [FETCH_ITEM_LIST](state, items) {
    state.items = items;
  },
  [FETCH_ITEM](state, item) {
    state.item = item;
  },
};
