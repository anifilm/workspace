<template>
  <div align="center">
    <h2>회원게시글 목록</h2>
    <router-link v-if="isMember" :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list :boards="boards" />
  </div>
</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import BoardList from '@/components/board/BoardList.vue';

export default {
  name: 'BoardListPage',
  components: {
    BoardList,
  },
  computed: {
    ...mapState(['boards']),
    ...mapGetters(['isMember']),
  },
  methods: {
    ...mapActions(['fetchBoardList']),
  },
  mounted() {
    this.fetchBoardList();
  },
};
</script>
