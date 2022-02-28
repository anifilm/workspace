<template>
  <div align="center">
    <h2>게시글 수정</h2>
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
