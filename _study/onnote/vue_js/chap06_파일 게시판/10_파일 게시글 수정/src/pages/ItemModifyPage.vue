<template>
  <div align="center">
    <h2>상품 수정</h2>
    <item-modify-form v-if="item" :item="item" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import api from '../api';
import { mapState, mapActions } from 'vuex';

import ItemModifyForm from '../components/ItemModifyForm.vue';

export default {
  name: 'ItemModifyPage',
  components: {
    ItemModifyForm,
  },
  props: {
    itemId: {
      type: String,
      requierd: true,
    },
  },
  computed: {
    ...mapState(['item']),
  },
  methods: {
    ...mapActions(['fetchItem']),
    onSubmit(payload) {
      const { itemName, price, description, file } = payload;

      const itemObject = {
        itemId: this.itemId,
        itemName,
        price,
        description,
      };

      let formData = new FormData();
      formData.append('file', file);
      formData.append('item', JSON.stringify(itemObject));

      api
        .put('/items', formData, {
          headers: { 'Content-Type': 'multipart/form-data' },
        })
        .then((res) => {
          alert('수정되었습니다.');
          this.$router.push({
            name: 'ItemReadPage',
            params: {
              itemId: res.data.itemId.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.massage);
        });
    },
  },
};
</script>
