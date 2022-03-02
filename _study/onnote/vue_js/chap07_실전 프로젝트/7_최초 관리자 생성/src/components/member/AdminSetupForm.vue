<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>관리자 아이디</td>
        <td><input type="text" v-model="userId" /></td>
      </tr>
      <tr>
        <td>관리자명</td>
        <td><input type="text" v-model="userName" /></td>
      </tr>
      <tr>
        <td>비밀번호</td>
        <td><input type="password" v-model="userPw" /></td>
      </tr>
      <tr>
        <td colspan="2" align="center">
          <button type="submit">등록</button>
        </td>
      </tr>
    </table>
  </form>
</template>

<script>
export default {
  name: 'AdminSetupForm',
  data() {
    return {
      userId: '',
      userName: '',
      userPw: '',
    };
  },
  methods: {
    onSubmit() {
      const { userId, userName, userPw } = this;
      this.$emit('submit', { userId, userName, userPw });
    },
  },
};
</script>
