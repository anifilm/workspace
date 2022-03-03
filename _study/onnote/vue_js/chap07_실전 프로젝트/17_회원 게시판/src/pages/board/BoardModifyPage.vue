<template>
  <div align="center">
    <h2>회원게시글 수정</h2>
    <board-modify-form v-if="board" :board="board" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { mapState } from 'vuex';
import api from '@/api';

import BoardModifyForm from '@/components/board/BoardModifyForm.vue';

export default {
  name: 'BoardModifyPage',
  components: {
    BoardModifyForm,
  },
  props: {
    boardNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['board']),
  },
  methods: {
    onSubmit(payload) {
      const { title, content, writer } = payload;
      api.put(`/boards/${this.boardNo}`, { title, content, writer })
        .then((res) => {
          alert('수정이 완료되었습니다.');
          this.$router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          if (err.response.status === 401) {
            alert('로그인이 필요합니다.');
            this.$router.push({ name: 'Signin' });
          } else if (err.response.status === 403) {
            alert('접근 권한이 없습니다.');
            this.$router.back();
          } else {
            alert(err.response.data.message);
          }
        });
    },
  },
};
</script>
