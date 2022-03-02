<template>
  <div align="center">
    <h2>회원 목록</h2>
    <router-link :to="{ name: 'MemberRegisterPage' }">새로만들기</router-link>
    <member-list :members="members" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';

import MemberList from '@/components/member/MemberList.vue';

export default {
  name: 'MemberListPage',
  components: {
    MemberList,
  },
  computed: {
    ...mapState(['members']),
  },
  methods: {
    ...mapActions(['fetchMemberList']),
  },
  mounted() {
    this.fetchMemberList();
  },
};
</script>
