<template>
  <div align="center">
    <h3>게시글 상세보기</h3>
    <board-read v-if="board" :board="board" />
    <p v-else>Loading...</p>
    <router-link
      :to="{ name: 'BoardModifyPage', params: { boardNo } }"
    >편집</router-link>
    <button @click="deletePost">삭제</button>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script>
import { ref } from 'vue';
import { useRoute } from 'vue-router';
import client from '../modules/client';
import { router } from '../router';

import BoardRead from '../components/BoardRead.vue';

export default {
  name: 'BoardReadPage',
  components: {
    BoardRead,
  },
  setup() {
    const board = ref({});

    const route = useRoute();
    const boardNo = route.params.boardNo;

    client.get(`/boards/${boardNo}`)
      .then((res) => {
        board.value = res.data;
      })
      .catch((err) => {
        console.log(props);
        alert(err.response.data.message);
      });

    // 게시글 삭제
    const deletePost = () => {
      const { boardNo } = board.value;
      client.delete(`/boards/${boardNo}`)
        .then((res) => {
          alert('삭제되었습니다.');
          router.push({ name: 'BoardListPage' });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    };

    return {
      board,
      boardNo,
      deletePost,
    };
  },
};
</script>
