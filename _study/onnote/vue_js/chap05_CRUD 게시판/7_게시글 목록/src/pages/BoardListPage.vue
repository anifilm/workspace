<template>
  <div align="center">
    <h2>게시글 목록</h2>
    <router-link :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list :boards="boards" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import BoardList from '../components/BoardList.vue';

export default {
  name: 'BoardListPage',
  components: {
    BoardList,
  },
  computed: {
    ...mapState(['boards']),
  },
  methods: {
    ...mapActions(['fetchBoardList']),
  },
  mounted() {
    this.fetchBoardList();
  },
};
</script>
