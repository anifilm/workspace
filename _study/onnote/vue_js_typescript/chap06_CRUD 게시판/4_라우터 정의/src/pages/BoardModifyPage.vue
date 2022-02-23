<template>
  <div align="center">
    <h3>게시판 수정</h3>
    <board-modify-form />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import BoardModifyForm from '../components/BoardModifyForm.vue';

@Component({
  components: {
    BoardModifyForm,
  },
})
export default class BoardModifyPage extends Vue {

}
</script>
