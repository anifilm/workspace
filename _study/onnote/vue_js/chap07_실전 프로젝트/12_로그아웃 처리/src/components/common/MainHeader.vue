<template>
  <div align="right">
    <div v-if="isAuthorized">
      <span>{{ userInfo.userName }}님 환영합니다.</span>&nbsp;
      <button @click="onClickSignout">로그아웃</button>
    </div>
    <div v-else>
      <router-link :to="{ name: 'Signin' }">로그인</router-link>
    </div>
  </div>
</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

export default {
  name: 'MainHeader',
  computed: {
    ...mapState(['userInfo']),
    ...mapGetters(['isAuthorized', 'isAdmin']),
  },
  methods: {
    ...mapActions(['signout']),
    // 로그아웃 처리 메서드
    onClickSignout() {
      this.signout();
      alert('로그아웃 되었습니다.');
      this.$router.push({ name: 'Home' });
    },
  }
};
</script>
