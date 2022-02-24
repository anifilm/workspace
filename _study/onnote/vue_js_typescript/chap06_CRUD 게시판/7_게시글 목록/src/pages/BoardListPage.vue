<template>
  <div align="center">
    <h3>게시글 목록</h3>
    <router-link :to="{ name: 'BoardRegisterPage' }">새로만들기</router-link>
    <board-list :boards="boards" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import { Board } from '../store';

import BoardList from '../components/BoardList.vue';

@Component({
  components: {
    BoardList,
  },
})
export default class BoardListPage extends Vue {
  // 스토어 상태 맵핑
  @State readonly boards!: Board[];
  // 스토어 액션 맵핑
  @Action readonly fetchBoardList: any;

  created() {
    this.fetchBoardList();
  }
}
</script>
