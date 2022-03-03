<template>
  <div align="center">
    <h2>공지사항 등록</h2>
    <notice-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '@/api';

import NoticeRegisterForm from '@/components/notice/NoticeRegisterForm.vue';

export default {
  name: 'NoticeRegisterPage',
  components: {
    NoticeRegisterForm,
  },
  methods: {
    onSubmit(payload) {
      const { title, content } = payload;
      api.post('/notices', { title, content })
        .then((res) => {
          //console.log(res);
          alert('등록이 왼료되었습니다.');
          this.$router.push({
            name: 'NoticeReadPage',
            params: {
              noticeNo: res.data.noticeNo.toString(),
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
