<template>
  <div>
    <table>
      <tr>
        <th width="80" style="text-align: center">상품아이디</th>
        <th width="320" style="text-align: center">상품명</th>
        <th width="100" style="text-align: center">상품가격</th>
      </tr>
      <tr v-if="!items || (Array.isArray(items) && items.length === 0)">
        <td colspan="3">List is empty.</td>
      </tr>
      <tr v-else v-for="item in items" :key="item.itemId">
        <td style="text-align: center">{{ item.itemId }}</td>
        <td style="text-align: left; padding-left: 50px;">
          <router-link
            :to="{ name: 'ItemReadPage', params: { itemId: item.itemId.toString() } }"
          >{{ item.itemName }}</router-link>
        </td>
        <td style="text-align: right; padding-right: 40px;">{{ item.price }}원</td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'ItemList',
  props: {
    items: {
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
