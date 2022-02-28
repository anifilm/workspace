import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';
import AxiosService from '../service';
import {
  FETCH_ITEM_LIST,
  FETCH_ITEM,
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
    [FETCH_ITEM](state, item: Item) {
      state.item = item;
    }
  },
  actions: {
    fetchItemList({ commit }) {
      return AxiosService.instance.get('/items')
        .then((res) => {
          commit(FETCH_ITEM_LIST, res.data);
        });
    },
    fetchItem({ commit }, itemId: number) {
      return AxiosService.instance.get(`/items/${itemId}`)
        .then((res) => {
          commit(FETCH_ITEM, res.data);
        });
    },
  },
}

export default new Vuex.Store(store);
