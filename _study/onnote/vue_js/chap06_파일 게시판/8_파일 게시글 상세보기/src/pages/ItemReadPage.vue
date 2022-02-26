<template>
  <div align="center">
    <h3>상품 상세보기</h3>
    <item-read v-if="item" :item="item" />
    <p v-else>Loading...</p>
    <router-link
      :to="{ name: 'ItemModifyPage', params: { itemId } }"
    >수정</router-link>
    <button>삭제</button>
    <router-link :to="{ name: 'ItemListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import ItemRead from '../components/ItemRead.vue';

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
  },
  methods: {
    ...mapActions(['fetchItem']),
  },
  created() {
    this.fetchItem(this.itemId)
      .catch((err) => {
        alert(err.response.data.msg);
        this.$router.back();
      });
  },
};
</script>
