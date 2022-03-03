<template>

</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import ItemList from '@/components/item/ItemList.vue';

export default {
  name: 'ItemListPage',
  components: {
    ItemList,
  },
  computed: {
    ...mapState(['items']),
    ...mapGetters(['isAdmin']),
  },
  methods: {
    ...mapActions(['fetchItemList']),
  },
  mounted() {
    this.fetchItemList();
  },
};
</script>
