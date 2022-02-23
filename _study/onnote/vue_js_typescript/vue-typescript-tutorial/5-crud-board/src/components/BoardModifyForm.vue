<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="board.boardNo" disabled /></td>
      </tr>
      <tr>
        <td>등록일시</td>
        <td><input type="text" :value="board.regDate" disabled /></td>
      </tr>
      <tr>
        <td>작성자</td>
        <td><input type="text" :value="board.writer" disabled /></td>
      </tr>
      <tr>
        <td>제목</td>
        <td><input type="text" v-model="title" /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea v-model="content" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">수정</button>
      <router-link
        :to="{ name: 'BoardReadPage', params: { boardNo: board.boardNo.toString() } }"
      >취소</router-link>
    </div>
  </form>
</template>

<script lang="ts">
import { Component, Vue, Prop, Emit } from 'vue-property-decorator';
import { Board } from '../store';

@Component
export default class BoardModifyForm extends Vue {
  // props 속성으로 board 정의
  @Prop() board!: Board;
  // 폼 요소들과 바인딩할 데이터 정의
  title: string = '';
  content: string = '';

  // 수정 처리 이벤트 발생
  @Emit('submit')
  onSubmit() {
    const { title, content } = this;
    return {
      title,
      content,
    };
  }

  // 전달받은 board 값을 바인딩 데이터에 대입
  created() {
    this.title = this.board.title;
    this.content = this.board.content;
  }
}
</script>
