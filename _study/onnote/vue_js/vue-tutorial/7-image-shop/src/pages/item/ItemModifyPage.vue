<template>
  <div align="center">
    <h2>상품 수정</h2>
    <item-modify-form v-if="item" :item="item" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
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
      const { itemName, price, description, file, previewFile } = payload;

      const itemObject = {
        itemId: this.itemId,
        itemName,
        price,
        description,
      };

      let formData = new FormData();
      formData.append('file', file);
      formData.append('file2', previewFile);
      formData.append('item', JSON.stringify(itemObject));

      api
        .put(`/items/${this.itemId}`, formData, {
          headers: { 'Content-Type': 'multipart/form-data' },
        })
        .then((res) => {
          alert('수정이 완료되었습니다.');
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
  created() {
    this.fetchItem(this.itemId)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  }
};
</script>
