<template>
  <form @submit.prevent="submit">
    <table>
      <tr>
        <td>아이디</td>
        <td><input type="text" v-model="userId" /></td>
      </tr>
      <tr>
        <td>비밀번호</td>
        <td><input type="password" v-model="password" /></td>
      </tr>
      <tr>
        <td colspan="2" align="center">
          <button type="submit">로그인</button>
        </td>
      </tr>
    </table>
  </form>
</template>

<script>
export default {
  name: 'SigninForm',
  data() {
    return {
      userId: '',
      password: '',
    };
  },
  methods: {
    submit() {
      const { userId, password } = this;
      this.$emit('submit', { userId, password });
    },
  },
};
</script>
