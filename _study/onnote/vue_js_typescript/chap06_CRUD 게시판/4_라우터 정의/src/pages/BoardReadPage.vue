<template>
  <div align="center">
    <h2>게시글 상세보기</h2>
    <board-read />
    <router-link
      :to="{ name: 'BoardModifyPage', params: { boardNo: 100 } }"
    >수정</router-link>
    <button>삭제</button>
    <router-link :to="{ name: 'BoardListPage' }">목록</router-link>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import BoardRead from '../components/BoardRead.vue';

@Component({
  components: {
    BoardRead,
  },
})
export default class BoardReadPage extends Vue {

}
</script>
