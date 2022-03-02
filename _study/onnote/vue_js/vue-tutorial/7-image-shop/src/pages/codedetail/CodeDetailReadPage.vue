<template>
  <div align="center">
    <h2>코드 상세보기</h2>
    <code-detail-read v-if="codeDetail && codeGroups" :codeDetail="codeDetail" :codeGroups="codeGroups" />
    <router-link :to="{ name: 'CodeDetailModifyPage', params: { groupCode, codeValue } }">편집</router-link>
    <button @click="onDelete">삭제</button>
    <router-link :to="{ name: 'CodeDetailListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import CodeDetailRead from '@/components/codedetail/CodeDetailRead.vue';

export default {
  name: 'CodeDetailReadPage',
  components: {
    CodeDetailRead,
  },
  props: {
    groupCode: {
      type: String,
      required: true,
    },
    codeValue: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['codeGroups', 'codeDetail']),
  },
  methods: {
    ...mapActions(['fetchCodeGroupList', 'fetchCodeDetail']),
    onDelete() {
      const { groupCode, codeValue } = this.codeDetail;
      api.delete(`/codedetails/${groupCode}/${codeValue}`)
        .then((res) => {
          alert('삭제가 완료되었습니다.');
          this.$router.push({ name: 'CodeDetailListPage' });
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
    const { groupCode, codeValue } = this;
    this.fetchCodeGroupList()
      .then((res) => {
        this.fetchCodeDetail({ groupCode, codeValue })
          .catch((err) => {
            alert(err.response.data.message);
            this.$router.back();
          });
      })
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
