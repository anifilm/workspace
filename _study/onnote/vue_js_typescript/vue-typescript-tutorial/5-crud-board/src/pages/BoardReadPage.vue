<template>
  <div align="center">
    <h3>게시글 상세보기</h3>
    <board-read v-if="board" :board="board" />
    <p v-else>Loading...</p>
    <router-link
      :to="{ name: 'BoardModifyPage', params: { boardNo } }"
    >수정</router-link>
    <button @click="onDelete">삭제</button>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import { Board } from '../store';
import AxiosService from '../service';

import BoardRead from '../components/BoardRead.vue';

@Component({
  components: {
    BoardRead,
  },
})
export default class BoardReadPage extends Vue {
  // props 속성에 넘겨받는 값 boardNo 정의
  @Prop() boardNo!: number;
  // 스토어 상태 맵핑
  @State readonly board!: Board;
  // 스토어 액션 맵핑
  @Action readonly fetchBoard: any;

  // 게시글 삭제
  onDelete() {
    const { boardNo } = this.board;
    AxiosService.instance.delete(`/boards/${boardNo}`)
      .then((res) => {
        alert('삭제되었습니다.');
        this.$router.push({ name: 'BoardListPage' });
      })
      .catch((err) => {
        alert(err.response.data.message);
      });
  }

  // 맵핑된 함수 fetchBoard() 실행
  created() {
    this.fetchBoard(this.boardNo)
      .catch((err: any) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  }
}
</script>
