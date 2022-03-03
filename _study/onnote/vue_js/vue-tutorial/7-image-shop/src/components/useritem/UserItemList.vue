<template>
  <div>
    <table>
      <tr>
        <th align="center" width="80">번호</th>
        <th align="center" width="180">상품명</th>
        <th align="center" width="100">상품가격</th>
        <th align="center" width="180">구매일시</th>
        <th align="center" width="120">다운로드</th>
      </tr>
      <tr v-if="!userItems || (Array.isArray(userItems) && userItems.length === 0)">
        <td colspan="5">List is empty.</td>
      </tr>
      <tr v-else v-for="userItem in userItems" :key="userItem.historyNo">
        <td align="center">{{ userItem.userItemNo }}</td>
        <td align="left"><router-link :to="{ name: 'UserItemReadPage', params: { userItemNo: userItem.userItemNo } }">{{ userItem.itemName }}</router-link></td>
        <td align="right">{{ userItem.price }}원</td>
        <td align="center">{{ userItem.regDate }}</td>
        <td align="center"><a @click.prevent.stop="download(userItem.userItemNo)">DOWNLOAD</a></td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'UserItemList',
  props: {
    userItems: {
      type: Array,
    },
  },
  methods: {
    download(userItemNo) {
      this.$emit('download', { userItemNo });
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
a:hover {
  text-decoration: underline;
}
</style>
