<template>

</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import ItemModifyForm from '@/components/item/ItemModifyForm.vue';

export default {
  name: 'ItemModifyPage',
  components: {
    ItemModifyForm,
  },
  props: {
    itemId: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['item']),
  },
  methods: {
    ...mapActions(['fetchItem']),
    onSubmit(payload) {

    },
  },
  created() {
    this.fetchItem(this.itemId);
  }
};
</script>
