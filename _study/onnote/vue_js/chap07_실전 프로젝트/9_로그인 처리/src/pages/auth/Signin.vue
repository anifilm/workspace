<template>
  <div align="center">
    <h2>로그인</h2>
    <signin-form @submit="onSubmit" />
  </div>
</template>

<script>
import { mapActions } from 'vuex';

import SigninForm from '@/components/auth/SigninForm.vue';

export default {
  name: 'Signin',
  components: {
    SigninForm,
  },
  methods: {
    ...mapActions(['signin']),
    // 로그인 처리 메서드
    onSubmit(payload) {
      this.signin(payload)
        .then((res) => {
          alert('로그인 되었습니다.');
          this.$router.push({ name: 'Home' });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
};
</script>
