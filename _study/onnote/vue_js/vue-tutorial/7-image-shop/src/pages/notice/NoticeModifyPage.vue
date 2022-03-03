<template>
  <div align="center">
    <h2>공지사항 수정</h2>
    <notice-modify-form v-if="notice" :notice="notice" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
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
      const { title, content } = payload;
      api.put(`/notices/${this.noticeNo}`, { title, content })
        .then((res) => {
          alert('수정이 완료되었습니다.');
          this.$router.push({
            name: 'NoticeReadPage',
            params: {
              noticeNo: res.data.noticeNo.toString(),
            },
          });
        })
        .catch((err) => {
          if (err.response.status === 401) {
            alert('로그인이 필요합니다.');
            this.$router.push({ name: 'Signin' });
          } else if (err.response.status === 403) {
            alert('접근 권한이 없습니다.');
            this.$router.back();
          } else {
            alert(err.response.data.message);
          }
        });
    },
  },
  created() {
    this.fetchNotice(this.noticeNo)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
