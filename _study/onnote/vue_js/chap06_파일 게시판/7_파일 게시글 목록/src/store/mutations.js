import {
  FETCH_ITEM_LIST,
} from './mutation-types';

export default {
  [FETCH_ITEM_LIST](state, items) {
    state.items = items;
  },
};
