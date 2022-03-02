<template>
  <div align="center">
    <h2>코드그룹 상세보기</h2>
    <code-group-read v-if="codeGroup" :codeGroup="codeGroup" />
    <router-link :to="{ name: 'CodeGroupModifyPage', params: { groupCode } }">편집</router-link>
    <button @click="onDelete">삭제</button>
    <router-link :to="{ name: 'CodeGroupListPage' }">목록</router-link>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import CodeGroupRead from '@/components/codegroup/CodeGroupRead.vue';

export default {
  name: 'CodeGroupReadPage',
  components: {
    CodeGroupRead,
  },
  props: {
    groupCode: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['codeGroup']),
  },
  methods: {
    ...mapActions(['fetchCodeGroup']),
    onDelete() {
      const { groupCode } = this.codeGroup;
      api.delete(`/codegroups/${groupCode}`)
        .then((res) => {
          alert('삭제가 완료되었습니다.');
          this.$router.push({ name: 'CodeGroupListPage' });
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
    }
  },
  created() {
    this.fetchCodeGroup(this.groupCode)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
