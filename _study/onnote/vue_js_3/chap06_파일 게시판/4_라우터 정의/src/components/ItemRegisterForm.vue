<template>
  <div>
    <h3>상품 등록 폼</h3>
    <button type="submit">등록</button>
    <router-link :to="{ name: 'ItemListPage' }">취소</router-link>
  </div>
</template>

<script>
export default {
  name: 'ItemRegisterForm',
};
</script>
