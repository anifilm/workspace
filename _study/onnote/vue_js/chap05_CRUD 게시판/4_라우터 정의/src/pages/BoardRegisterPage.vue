<template>
  <div align="center">
    <h2>게시글 등록</h2>
    <board-register-form />
  </div>
</template>

<script>
import BoardRegisterForm from '../components/BoardRegisterForm.vue';

export default {
  name: 'BoardRegisterPage',
  components: {
    BoardRegisterForm,
  },
};
</script>
