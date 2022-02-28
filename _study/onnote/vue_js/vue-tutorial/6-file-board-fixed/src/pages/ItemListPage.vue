<template>
  <div class="container">
    <h3>상품 목록</h3>
    <item-list :items="items" />
    <br />
    <router-link :to="{ name: 'ItemRegisterPage' }" class="waves-effect waves-light btn blue">새로운 상품 등록</router-link>
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
