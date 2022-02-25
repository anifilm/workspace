<template>
  <div align="center">
    <h3>게시글 상세보기</h3>
    <board-read />
    <router-link
      :to="{ name: 'BoardModifyPage', params: { BoardNo: 100 } }"
    >수정</router-link>
    <button>삭제</button>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script>
import BoardRead from '../components/BoardRead.vue';

export default {
  name: 'BoardReadPage',
  components: {
    BoardRead,
  },
};
</script>
