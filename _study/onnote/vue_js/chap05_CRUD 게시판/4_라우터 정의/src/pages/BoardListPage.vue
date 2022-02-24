<template>
  <div align="center">
    <h3>게시글 목록</h3>
    <router-link :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list />
  </div>
</template>

<script>
import BoardList from '../components/BoardList.vue';

export default {
  name: 'BoardListPage',
  components: {
    BoardList,
  },
};
</script>
