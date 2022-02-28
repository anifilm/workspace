<template>
  <div align="center">
    <h2>상품 수정</h2>
    <item-modify-form v-if="item" :item="item" @modify-post="modifyPost" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { ref } from 'vue';
import { useRoute } from 'vue-router';
import { router } from '../router';
import client from '../modules/client';

import ItemModifyForm from '../components/ItemModifyForm.vue';

export default {
  name: 'ItemModifyPage',
  components: {
    ItemModifyForm,
  },
  setup() {
    const item = ref({});

    const route = useRoute();
    const itemId = route.params.itemId;

    client.get(`/items/${itemId}`)
      .then((res) => {
        item.value = res.data;
      })
      .catch((err) => {
        alert(err.response.data.message);
        router.back();
      });

    // 게시글 수정
    const modifyPost = (payload) => {
      const { itemName, price, description, file } = payload;

      const itemObject = {
        itemId,
        itemName,
        price,
        description,
      };

      let formData = new FormData();
      formData.append('file', file);
      formData.append('item', JSON.stringify(itemObject));

      client
        .put('/items', formData, {
          headers: { 'Content-Type': 'multipart/form-data' },
        })
        .then((res) => {
          alert('수정되었습니다.');
          router.push({
            name: 'ItemReadPage',
            params: {
              itemId: res.data.itemId.toString(),
            }
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    };

    return {
      item,
      modifyPost,
    };
  },
};
</script>
