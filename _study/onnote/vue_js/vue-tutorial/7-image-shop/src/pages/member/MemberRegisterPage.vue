<template>
  <div align="center">
    <h2>회원 등록</h2>
    <member-register-form :jobCodes="jobCodes" @submit="onSubmit" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import MemberRegisterForm from '@/components/member/MemberRegisterForm.vue';

export default {
  name: 'MemberRegisterPage',
  components: {
    MemberRegisterForm,
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
          alert('등록이 완료되었습니다.');
          this.$router.push({
            name: 'MemberReadPage',
            params: {
              userNo: res.data.userNo,
            },
          });
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
