<template>
  <div align="center">
    <h2>게시글 목록</h2>
    <router-link :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list :boards="boards" />
  </div>
</template>

<script>
import { ref, onMounted } from 'vue';
import client from '../modules/client';

import BoardList from '../components/BoardList.vue';

export default {
  name: 'BoardListPage',
  components: {
    BoardList,
  },
  setup() {
    const boards = ref([]);

    onMounted(() => {
      client.get('/boards')
        .then((res) => {
          boards.value = res.data;
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    });

    return {
      boards,
    };
  },
};
</script>
