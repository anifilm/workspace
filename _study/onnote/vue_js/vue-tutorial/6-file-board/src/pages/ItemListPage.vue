<template>
  <div align="center">
    <h2>상품 목록</h2>
    <router-link :to="{ name: 'ItemRegisterPage' }">새로만들기</router-link>
    <item-list :items="items" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import ItemList from '../components/ItemList.vue';

export default {
  name: 'ItemListPage',
  components: {
    ItemList,
  },
  computed: {
    ...mapState(['items']),
  },
  methods: {
    ...mapActions(['fetchItemList']),
  },
  mounted() {
    this.fetchItemList();
  },
};
</script>
