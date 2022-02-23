<template>
  <div align="center">
    <h3>게시글 수정</h3>
    <board-modify-form />
  </div>
</template>

<script>
import BoardModifyForm from '../components/BoardModifyForm.vue';

export default {
  name: 'BoardModifyPage',
  components: {
    BoardModifyForm,
  },
};
</script>
