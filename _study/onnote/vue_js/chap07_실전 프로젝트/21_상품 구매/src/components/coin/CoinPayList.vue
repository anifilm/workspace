<template>
  <div>
    <table>
      <tr>
        <th align="center" width="80">번호</th>
        <th align="center" width="180">상품명</th>
        <th align="center" width="120">구매금액</th>
        <th align="center" width="180">구매일시</th>
      </tr>
      <tr v-if="!payCoins || (Array.isArray(payCoins) && payCoins.length === 0)">
        <td colspan="4">List is empty.</td>
      </tr>
      <tr v-else v-for="payCoin in payCoins" :key="payCoin.historyNo">
        <td align="center">{{ payCoin.historyNo }}</td>
        <td align="left">{{ payCoin.itemName }}</td>
        <td align="right">{{ payCoin.amount }}원</td>
        <td align="center">{{ payCoin.regDate }}</td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'CoinPayList',
  props: {
    payCoins: {
      type: Array,
    },
  },
};
</script>

<style scoped>
table {
  border-top: 1px solid lightgray;
  border-collapse: collapse;
}
th, td {
  border-bottom: 1px solid lightgray;
  padding: 10px;
}
</style>
