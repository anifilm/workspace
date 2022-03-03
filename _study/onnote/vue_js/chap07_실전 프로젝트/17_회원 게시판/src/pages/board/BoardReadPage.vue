<template>
  <div align="center">
    <h2>회원게시글 상세보기</h2>
    <board-read v-if="board" :board="board" />
    <p v-else>Loading...</p>
    <template v-if="isAuthorized && board && (userInfo.userId === board.writer)">
      <router-link
        :to="{ name: 'BoardModifyPage', params: { boardNo } }"
      >수정</router-link>
      <button @click="onDelete">삭제</button>
    </template>
    <template v-if="isAdmin">
      <button @click="onDelete">삭제</button>
    </template>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import BoardRead from '@/components/board/BoardRead.vue';

export default {
  name: 'BoardReadPage',
  components: {
    BoardRead,
  },
  props: {
    boardNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['board', 'userInfo']),
    ...mapGetters(['isAuthorized', 'isAdmin']),
  },
  methods: {
    ...mapActions(['fetchBoard']),
    onDelete() {
      const { boardNo } = this.board;
      api.delete(`/boards/${boardNo}`)
        .then((res) => {
          alert('삭제되었습니다.');
          this.$router.push({ name: 'BoardListPage' });
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
  created() {
    this.fetchBoard(this.boardNo)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
