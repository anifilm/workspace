<template>

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
