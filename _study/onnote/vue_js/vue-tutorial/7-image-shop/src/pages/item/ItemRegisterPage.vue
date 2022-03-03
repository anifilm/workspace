<template>
  <div align="center">
    <h2>상품 등록</h2>
    <item-register-form @submit="onSubmit" />
  </div>
</template>

<script>
import api from '@/api';

import ItemRegisterForm from '@/components/item/ItemRegisterForm.vue';

export default {
  name: 'ItemRegisterPage',
  components: {
    ItemRegisterForm,
  },
  methods: {
    onSubmit(payload) {
      const { itemName, price, description, file, previewFile } = payload;

      const itemObject = {
        itemName,
        price,
        description,
      };

      let formData = new FormData();
      formData.append('file', file);
      formData.append('file2', previewFile);
      formData.append('item', JSON.stringify(itemObject));

      api
        .post('/items', formData, {
          headers: { 'Content-Type': 'multipart/form-data' },
        })
        .then((res) => {
          alert('등록이 완료되었습니다.');
          this.$router.push({
            name: 'ItemReadPage',
            params: {
              itemId: res.data.itemId.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
};
</script>
