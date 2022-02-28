<template>
  <div align="center">
    <h2>게시글 등록</h2>
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
          //console.log(res);
          alert('등록되었습니다.');
          this.$router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
};
</script>
