<template>
  <div align="center">
    <h3>게시판 등록</h3>
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
