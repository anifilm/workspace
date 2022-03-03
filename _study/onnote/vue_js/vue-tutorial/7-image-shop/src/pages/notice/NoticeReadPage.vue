<template>
  <div align="center">
    <h2>공지사항 상세보기</h2>
    <notice-read v-if="notice" :notice="notice" />
    <p v-else>Loading...</p>
    <template v-if="isAdmin">
      <router-link
        :to="{ name: 'NoticeModifyPage', params: { noticeNo } }"
      >수정</router-link>
      <button @click="onDelete">삭제</button>
    </template>
    <router-link :to="{ name: 'NoticeListPage' }">목록</router-link>
  </div>
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
      const { noticeNo } = this.notice;
      api.delete(`/notices/${noticeNo}`)
        .then((res) => {
          alert('삭제가 완료되었습니다.');
          this.$router.push({ name: 'NoticeListPage' });
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
