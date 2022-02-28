<template>
  <div align="center">
    <h2>상품 상세보기</h2>
    <item-read v-if="item" :item="item" />
    <p v-else>Loading...</p>
    <router-link
      :to="{ name: 'ItemModifyPage', params: { itemId } }"
    >수정</router-link>
    <button @click="deletePost">삭제</button>
    <router-link :to="{ name: 'ItemListPage' }">목록</router-link>
  </div>
</template>

<script>
import { ref } from 'vue';
import { useRoute } from 'vue-router';
import { router } from '../router';
import client from '../modules/client';

import ItemRead from '../components/ItemRead.vue';

export default {
  name: 'ItemReadPage',
  components: {
    ItemRead,
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
        alert(err.response.data.msg);
      });

    // 상품 삭제
    const deletePost = () => {
      const { itemId } = item.value;
      client.delete(`/items/${itemId}`)
        .then((res) => {
          alert('삭제되었습니다.');
          router.push({ name: 'ItemListPage' });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    };

    return {
      item,
      itemId,
      deletePost,
    };
  },
};
</script>
