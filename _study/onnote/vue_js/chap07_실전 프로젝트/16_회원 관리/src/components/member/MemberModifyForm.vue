<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="member.userNo" disabled></td>
      </tr>
      <tr>
        <td>아이디</td>
        <td><input type="text" :value="member.userId" disabled></td>
      </tr>
      <tr>
        <td>사용자명</td>
        <td><input type="text" v-model="userName"></td>
      </tr>
      <tr>
        <td>직업</td>
        <td>
          <select v-model="job" :value="member.job">
            <option v-for="jobCode in jobCodes" :value="jobCode.value" :key="jobCode.value">
              {{ jobCode.label }}
            </option>
          </select>
        </td>
      </tr>
      <tr>
        <td>권한 - 1</td>
        <td>
          <select v-model="auth1">
            <option value="" selected="selected">=== 선택해 주세요 ===</option>
            <option value="ROLE_USER">사용자</option>
            <option value="ROLE_MEMBER">회원</option>
            <option value="ROLE_ADMIN">관리자</option>
          </select>
        </td>
      </tr>
      <tr>
        <td>권한 - 2</td>
        <td>
          <select v-model="auth2">
            <option value="" selected="selected">=== 선택해 주세요 ===</option>
            <option value="ROLE_USER">사용자</option>
            <option value="ROLE_MEMBER">회원</option>
            <option value="ROLE_ADMIN">관리자</option>
          </select>
        </td>
      </tr>
      <tr>
        <td>권한 - 3</td>
        <td>
          <select v-model="auth3">
            <option value="" selected="selected">=== 선택해 주세요 ===</option>
            <option value="ROLE_USER">사용자</option>
            <option value="ROLE_MEMBER">회원</option>
            <option value="ROLE_ADMIN">관리자</option>
          </select>
        </td>
      </tr>
    </table>
    <div>
      <button type="submit">수정</button>
      <router-link :to="{ name: 'MemberReadPage', params: { userNo: member.userNo } }">취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'MemberModifyForm',
  props: {
    member: {
      type: Object,
      required: true,
    },
    jobCodes: {
      type: Array,
    }
  },
  data() {
    return {
      userId: '',
      userPw: '',
      userName: '',
      job: '',
      auth1: '',
      auth2: '',
      auth3: '',
    };
  },
  methods: {
    onSubmit() {
      const { userId, userPw, userName, job, auth1, auth2, auth3 } = this;
      const userNo = this.member.userNo;

      const userObject = {
        userId,
        userPw,
        userName,
        job,
        authList: [
          {
            userNo: userNo,
            auth: auth1,
          },
          {
            userNo: userNo,
            auth: auth2,
          },
          {
            userNo: userNo,
            auth: auth3,
          },
        ],
      };

      this.$emit('submit', userObject);
    },
  },
  created() {
    this.userId = this.member.userId;
    this.userPw = this.member.userPw;
    this.userName = this.member.userName;
    this.job = this.member.job;

    if (this.member.authList[0]) {
      this.auth1 = this.member.authList[0].auth;
    }
    if (this.member.authList[1]) {
      this.auth1 = this.member.authList[1].auth;
    }
    if (this.member.authList[2]) {
      this.auth1 = this.member.authList[2].auth;
    }
  }
};
</script>
