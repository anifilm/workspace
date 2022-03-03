<template>
  <div align="center">
    <h2>구매상품 상세보기</h2>
    <user-item-read v-if="userItem" :userItem="userItem" />
    <p v-else>Loading...</p>
    <router-link :to="{ name: 'UserItemListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import UserItemRead from '@/components/useritem/UserItemRead.vue';

export default {
  name: 'UserItemReadPage',
  components: {
    UserItemRead,
  },
  props: {
    userItemNo: {
      type: Number,
      required: true,
    },
  },
  computed: {
    ...mapState(['userItem']),
  },
  methods: {
    ...mapActions(['fetchUserItem']),
  },
  created() {
    this.fetchUserItem(this.userItemNo)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
