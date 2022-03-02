<template>
  <div align="center">
    <h2>코드그룹 등록</h2>
    <code-group-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '@/api';

import CodeGroupRegisterForm from '@/components/codegroup/CodeGroupRegisterForm.vue';

export default {
  name: 'CodeGroupRegisterPage',
  components: {
    CodeGroupRegisterForm,
  },
  methods: {
    onSubmit(payload) {
      const { groupCode, groupName } = payload;
      api.post('/codegroups', { groupCode, groupName })
        .then((res) => {
          alert('등록이 완료되었습니다.');
          this.$router.push({
            name: 'CodeGroupReadPage',
            params: {
              groupCode: res.data.groupCode,
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
