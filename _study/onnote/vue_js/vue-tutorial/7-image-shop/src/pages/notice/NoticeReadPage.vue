<template>

</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import NoticeRead from '@/components/notice/NoticeRead.vue';

export default {
  name: 'NoticeReadPage',
  components: {
    NoticeRead,
  },
  props: {
    noticeNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['notice']),
    ...mapGetters(['isAdmin']),
  },
  methods: {
    ...mapActions(['fetchNotice']),
    onDelete() {

    },
  },
  created() {
    this.fetchNotice(this.noticeNo);
  },
};
</script>
