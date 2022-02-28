<template>
  <div align="center">
    <h2>게시글 수정</h2>
    <board-modify-form v-if="board" :board="board" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import { Board } from '../store';
import AxiosService from '../service';

import BoardModifyForm from '../components/BoardModifyForm.vue';

@Component({
  components: {
    BoardModifyForm,
  },
})
export default class BoardModifyPage extends Vue {
  // props 속성에 boardNo 정의
  @Prop() boardNo!: number;
  // 스토어 상태 맵핑
  @State readonly board!: Board;
  // 스토어 액션 함수 fetchBoard()를 컴포넌트에 맵핑
  @Action readonly fetchBoard: any;

  // submit 이벤트를 처리할 메서드
  onSubmit(payload: Board) {
    const { title, content } = payload;
    AxiosService.instance.put(`/boards/${this.boardNo}`, { title, content })
      .then((res) => {
        alert('수정되었습니다.');
        this.$router.push({
          name: 'BoardReadPage',
          params: {
            boardNo: res.data.boardNo.toString(),
          },
        });
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
