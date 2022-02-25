<template>
  <div align="center">
    <h3>게시글 목록</h3>
    <router-link :to="{ name: 'ItemRegisterPage' }">새로만들기</router-link>
    <item-list />
  </div>
</template>

<script>
import ItemList from '../components/ItemList.vue';

export default {
  name: 'ItemListPage',
  components: {
    ItemList,
  },
};
</script>
