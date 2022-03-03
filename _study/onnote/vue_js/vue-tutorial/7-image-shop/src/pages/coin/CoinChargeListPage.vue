<template>
  <div align="center">
    <h2>충전 내역</h2>
    <coin-charge-list :chargeCoins="chargeCoins" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import CoinChargeList from '@/components/coin/CoinChargeList.vue';

export default {
  name: 'CoinChargeListPage',
  components: {
    CoinChargeList
  },
  computed: {
    ...mapState(['chargeCoins']),
  },
  methods: {
    ...mapActions(['fetchChargeCoinList']),
  },
  mounted() {
    this.fetchChargeCoinList();
  },
};
</script>
