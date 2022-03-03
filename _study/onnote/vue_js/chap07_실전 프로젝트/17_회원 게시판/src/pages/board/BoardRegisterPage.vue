<template>
  <div align="center">
    <h2>회원게시판 등록</h2>
    <board-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '@/api';

import BoardRegisterForm from '@/components/board/BoardRegisterForm.vue';

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
          alert('등록이 왼료되었습니다.');
          this.$router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          if (err.response.status === 401) {
            alert('로그인이 필요합니다.');
            this.$router.push({ name: 'Signin' });
          } else if (err.response.status === 403) {
            alert('접근 권한이 없습니다.');
            this.$router.back();
          } else {
            alert(err.response.data.message);
          }
        });
    },
  },
};
</script>
