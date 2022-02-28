import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';
import AxiosService from '../service';
import {
  FETCH_ITEM_LIST,
} from './mutation-types';

Vue.use(Vuex);

// Item 타입 정의
export interface Item {
  itemId: number;
  itemName: string;
  price: number;
  description: string;
  file?: any;
}

// 스토어 상태 타입 선언
interface ItemState {
  items: Item[];
  item: Item;
}

// 스토어 생성
const store: StoreOptions<ItemState> = {
  state: {
    items: [],
    item: {
      itemId: 0,
      itemName: '',
      price: 0,
      description: '',
    },
  },
  mutations: {
    [FETCH_ITEM_LIST](state, items: Item[]) {
      state.items = items;
    },
  },
  actions: {
    fetchItemList({ commit }) {
      return AxiosService.instance.get('/items')
        .then((res) => {
          commit(FETCH_ITEM_LIST, res.data);
        });
    },
  },
}

export default new Vuex.Store(store);
