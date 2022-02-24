<template>
  <div align="center">
    <h3>게시글 등록</h3>
    <board-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '../api';
import BoardRegisterForm from '../components/BoardRegisterForm.vue';

export default {
  name: 'BoardRegisterPage',
  components: {
    BoardRegisterForm,
  },
  methods: {
    onSubmit(payload) {
      const { title, content, writer } = payload;
      api.post('/boards', { title, content, writer })
        .then((res) => {
          console.log(res);
          alert('등록되었습니다.');
          this.$router.push({
            name: 'BoardReadPage',
            params: { boardNo: res.data.boardNo },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
};
</script>
