<template>
  <div>
    <h3>상품 목록 뷰</h3>
    <router-link
      :to="{ name: 'ItemReadPage', params: { itemNo: 100 } }"
    >상품 상세보기</router-link>
  </div>
</template>

<script>
export default {
  name: 'ItemList',
};
</script>
