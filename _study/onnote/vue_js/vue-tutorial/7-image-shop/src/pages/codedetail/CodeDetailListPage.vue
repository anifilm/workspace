<template>
  <div align="center">
    <h2>코드 목록</h2>
    <router-link :to="{ name: 'CodeDetailRegisterPage' }">새로만들기</router-link>
    <code-detail-list :codeDetails="codeDetails" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import CodeDetailList from '@/components/codedetail/CodeDetailList.vue';

export default {
  name: 'CodeDetailListPage',
  components: {
    CodeDetailList,
  },
  computed: {
    ...mapState(['codeDetails']),
  },
  methods: {
    ...mapActions(['fetchCodeDetailList']),
  },
  mounted() {
    this.fetchCodeDetailList();
  }
};
</script>
