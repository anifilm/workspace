import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';

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

  },
  actions: {

  },
}

export default new Vuex.Store(store);
