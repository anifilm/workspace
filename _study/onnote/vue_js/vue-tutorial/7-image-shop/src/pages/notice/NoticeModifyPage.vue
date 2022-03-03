<template>

</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import NoticeModifyForm from '@/components/notice/NoticeModifyForm.vue';

export default {
  name: 'NoticeModifyPage',
  components: {
    NoticeModifyForm,
  },
  props: {
    noticeNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['notice']),
  },
  methods: {
    ...mapActions(['fetchNotice']),
    onSubmit(payload) {

    },
  },
  created() {
    this.fetchNotice(this.noticeNo);
  }
};
</script>
