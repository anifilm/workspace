<template>
  <div align="center">
    <h2>게시글 목록</h2>
    <router-link :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import BoardList from '../components/BoardList.vue';

@Component({
  components: {
    BoardList,
  },
})
export default class BoardListPage extends Vue {

}
</script>
