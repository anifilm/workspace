<template>
  <div align="center">
    <h2>공지사항 목록</h2>
    <router-link v-if="isAdmin" :to="{ name: 'NoticeRegisterPage' }">새로만들기</router-link>
    <notice-list :notices="notices" />
  </div>
</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import NoticeList from '@/components/notice/NoticeList.vue';

export default {
  name: 'NoticeListPage',
  components: {
    NoticeList,
  },
  computed: {
    ...mapState(['notices']),
    ...mapGetters(['isAdmin']),
  },
  methods: {
    ...mapActions(['fetchNoticeList']),
  },
  mounted() {
    this.fetchNoticeList();
  },
};
</script>
