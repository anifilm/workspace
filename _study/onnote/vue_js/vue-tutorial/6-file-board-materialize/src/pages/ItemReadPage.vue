<template>
  <div class="container">
    <h3>상품 상세보기</h3>
    <item-read v-if="item" :item="item" />
    <div v-else class="progress">
      <div class="indeterminate"></div>
    </div>
    <br />
    <router-link :to="{ name: 'ItemListPage' }" class="waves-effect waves-light btn">목록</router-link>&nbsp;
    <router-link
      :to="{ name: 'ItemModifyPage', params: { itemId } }"
      class="waves-effect waves-light btn blue"
    >수정</router-link>
    <button @click="onDelete" class="waves-effect waves-light btn red right">삭제</button>
  </div>
</template>

<script>
import api from '../api';
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
    onDelete() {
      const { itemId } = this.item;
      api.delete(`/items/${itemId}`)
        .then((res) => {
          alert('삭제되었습니다.');
          this.$router.push({ name: 'ItemListPage' });
        })
        .catch((err) => {
          alert(err.response.data.msg);
        });
    },
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
