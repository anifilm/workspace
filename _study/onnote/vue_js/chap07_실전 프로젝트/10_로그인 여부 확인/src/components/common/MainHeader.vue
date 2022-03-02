<template>
  <div align="right">
    <div v-if="isAuthorized">
      <span>{{ userInfo.userName }}님 환영합니다.</span>
    </div>
    <div v-else>
      <router-link :to="{ name: 'Signin' }">로그인</router-link>
    </div>
  </div>
</template>

<script>
import { mapState, mapGetters } from 'vuex';

export default {
  name: 'MainHeader',
  computed: {
    ...mapState(['userInfo']),
    ...mapGetters(['isAuthorized', 'isAdmin']),
  },
};
</script>
