<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>아이디</td>
        <td><input type="text" v-model="userId"></td>
      </tr>
      <tr>
        <td>비밀번호</td>
        <td><input type="password" v-model="userPw"></td>
      </tr>
      <tr>
        <td>사용자명</td>
        <td><input type="text" v-model="userName"></td>
      </tr>
      <tr>
        <td>직업</td>
        <td>
          <select v-model="job">
            <option v-for="jobCode in jobCodes" :value="jobCode.value" :key="jobCode.value">
              {{ jobCode.label }}
            </option>
          </select>
        </td>
      </tr>
    </table>
    <div>
      <button type="submit">등록</button>
      <router-link :to="{ name: 'MemberListPage' }">목록</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'MemberRegisterForm',
  props: {
    jobCodes: {
      type: Array,
    },
  },
  data() {
    return {
      userId: '',
      userPw: '',
      userName: '',
      job: '00',
    };
  },
  methods: {
    onSubmit() {
      const { userId, userPw, userName, job } = this;
      this.$emit('submit', { userId, userPw, userName, job });
    },
  },
};
</script>
