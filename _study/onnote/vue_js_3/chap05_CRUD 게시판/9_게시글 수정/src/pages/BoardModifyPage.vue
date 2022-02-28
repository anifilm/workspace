<template>
  <div align="center">
    <h2>게시글 수정</h2>
    <board-modify-form v-if="board" :board="board" @modify-post="modifyPost" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { ref } from 'vue';
import { useRoute } from 'vue-router';
import { router } from '../router';
import client from '../modules/client';

import BoardModifyForm from '../components/BoardModifyForm.vue';

export default {
  name: 'BoardModifyPage',
  components: {
    BoardModifyForm,
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
        alert(err.response.data.message);
        router.back();
      });

    // 게시글 수정
    const modifyPost = (payload) => {
      const { title, content } = payload;
      client.put(`/boards/${boardNo}`, { title, content })
        .then((res) => {
          alert('수정되었습니다.');
          router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    };

    return {
      board,
      modifyPost,
    };
  },
};
</script>
