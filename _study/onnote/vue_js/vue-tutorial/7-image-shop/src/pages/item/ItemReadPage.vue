<template>

</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';
import api from '@/api';

import ItemRead from '@/components/item/ItemRead.vue';

export default {
  name: 'ItemReadPage',
  components: {
    ItemRead,
  },
  props: {
    itemId: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['item']),
    ...mapGetters(['isMember', 'isAdmin']),
  },
  methods: {
    ...mapActions(['fetchItem']),
    onDelete() {

    },
  },
  created() {
    this.fetchItem(this.itemId);
  },
};
</script>
