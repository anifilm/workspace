<template>
  <form @submit.prevent="onModifyPost">
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
        <td><input type="text" v-model="board.title" /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea v-model="board.content" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">수정</button>
      <router-link
        :to="{ name: 'BoardReadPage', params: { boardNo } }"
      >취소</router-link>
    </div>
  </form>
</template>

<script>
import { useRoute } from 'vue-router';

export default {
  name: 'BoardModifyForm',
  props: {
    board: {
      type: Object,
      required: true,
    },
  },
  emit: ['modify-post'],
  setup(props, context) {
    const route = useRoute();
    const boardNo = route.params.boardNo;

    const onModifyPost = () => {
      context.emit('modify-post', {
        title: props.board.title,
        content: props.board.content,
      });
    };

    return {
      boardNo,
      onModifyPost,
    };
  },
};
</script>
