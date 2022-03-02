<template>
  <div align="center">
    <h2>회원가입</h2>
    <signup-form @submit="onSubmit" :jobCodes="jobCodes" />
    <p><router-link :to="{ name: 'Signin' }">로그인</router-link></p>
  </div>
</template>

<script>
import { mapState, mapActions} from 'vuex';
import api from '@/api';

import SignupForm from '@/components/auth/SignupForm.vue';

export default {
  name: 'Signup',
  components: {
    SignupForm,
  },
  computed: {
    ...mapState(['jobCodes']),
  },
  methods: {
    ...mapActions(['fetchJobCodeList']),
    onSubmit(payload) {
      const { userId, userPw, userName, job } = payload;
      api.post('/users', { userId, userPw, userName, job })
        .then((res) => {
          alert('회원가입이 완료되었습니다.');
          this.$router.push({ name: 'Signin' });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
  created() {
    this.fetchJobCodeList()
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
