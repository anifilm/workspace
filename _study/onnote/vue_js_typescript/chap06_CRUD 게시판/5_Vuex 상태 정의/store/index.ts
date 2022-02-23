import Vue from 'vue';
import Vuex, { StoreOptions } from 'vuex';

Vue.use(Vuex);

// Board 타입 정의
export interface Board {
  boardNo: number;
  title: string;
  writer: string;
  content: string;
  regDate: string;
}

// 스토어 상태 타입 선언
interface BoardState {
  boards: Board[];
  board: Board;
}

// 스토어 만들기
const store: StoreOptions<BoardState> = {
  state: {
    boards: [],
    board: {
      boardNo: 0,
      title: '',
      writer: '',
      content: '',
      regDate: '',
    },
  },
  mutations: {

  },
  actions: {

  },
};

export default new Vuex.Store(store);
