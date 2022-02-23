<template>
  <div>
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="board.boardNo" readonly /></td>
      </tr>
      <tr>
        <td>등록일시</td>
        <td><input type="text" :value="board.regDate" readonly /></td>
      </tr>
      <tr>
        <td>작성자</td>
        <td><input type="text" :value="board.writer" readonly /></td>
      </tr>
      <tr>
        <td>제목</td>
        <td><input type="text" :value="board.title" readonly /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea :value="board.content" cols="23" rows="5" readonly></textarea></td>
      </tr>
    </table>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { Board } from '../store';

@Component
export default class BoardRead extends Vue {
  // props 속성 정의
  @Prop() board!: Board;
}
</script>
