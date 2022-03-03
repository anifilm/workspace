<template>
  <div align="center">
    <h2>구매 내역</h2>
    <coin-pay-list :payCoins="payCoins" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import CoinPayList from '@/components/coin/CoinPayList.vue';

export default {
  name: 'CoinPayListPage',
  components: {
    CoinPayList,
  },
  computed: {
    ...mapState(['payCoins']),
  },
  methods: {
    ...mapActions(['fetchPayCoinList']),
  },
  mounted() {
    this.fetchPayCoinList();
  },
};
</script>
