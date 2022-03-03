<template>
  <div align="center">
    <h2>코인 충전</h2>
    <coin-charge-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '@/api';

import CoinChargeRegisterForm from '@/components/coin/CoinChargeRegisterForm.vue';

export default {
  name: 'CoinChargeRegisterPage',
  components: {
    CoinChargeRegisterForm,
  },
  methods: {
    onSubmit(payload) {
      const { amount } = payload;
      api.post(`/coins/charge/${amount}`, {amount})
        .then((res) => {
          alert(res.data);
          this.$router.push({
            name: 'CoinChargeListPage',
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
