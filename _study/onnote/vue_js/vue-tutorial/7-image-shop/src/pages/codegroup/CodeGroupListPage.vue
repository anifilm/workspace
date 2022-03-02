<template>
  <div align="center">
    <h2>코드그룹 목록</h2>
    <router-link :to="{ name: 'CodeGroupRegisterPage' }">새로만들기</router-link>
    <code-group-list :codeGroups="codeGroups" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import CodeGroupList from '@/components/codegroup/CodeGroupList.vue';

export default {
  name: 'CodeGroupListPage',
  components: {
    CodeGroupList
  },
  computed: {
    ...mapState(['codeGroups']),
  },
  methods: {
    ...mapActions(['fetchCodeGroupList']),
  },
  mounted() {
    this.fetchCodeGroupList();
  },
};
</script>
