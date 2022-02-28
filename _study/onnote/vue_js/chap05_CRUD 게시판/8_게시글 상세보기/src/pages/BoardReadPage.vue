<template>
  <div align="center">
    <h2>게시글 상세보기</h2>
    <board-read v-if="board" :board="board" />
    <p v-else>Loading...</p>
    <router-link
      :to="{ name: 'BoardModifyPage', params: { boardNo } }"
    >수정</router-link>
    <button>삭제</button>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import BoardRead from '../components/BoardRead.vue';

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
    ...mapState(['board']),
  },
  methods: {
    ...mapActions(['fetchBoard']),
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
