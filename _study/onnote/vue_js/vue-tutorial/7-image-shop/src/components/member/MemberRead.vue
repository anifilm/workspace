<template>
 <div>
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="member.userNo" readonly></td>
      </tr>
      <tr>
        <td>아이디</td>
        <td><input type="text" :value="member.userId" readonly></td>
      </tr>
      <tr>
        <td>사용자명</td>
        <td><input type="text" :value="member.userName" readonly></td>
      </tr>
      <tr>
        <td>직업</td>
        <td>
          <select v-model="member.job" disabled>
            <option v-for="jobCode in jobCodes" :value="jobCode.value" :key="jobCode.value">
              {{ jobCode.label }}
            </option>
          </select>
        </td>
      </tr>
      <tr>
        <td>권한 - 1</td>
        <td>
          <select :value="auth1">
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
          <select :value="auth2">
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
          <select :value="auth3">
            <option value="" selected="selected">=== 선택해 주세요 ===</option>
            <option value="ROLE_USER">사용자</option>
            <option value="ROLE_MEMBER">회원</option>
            <option value="ROLE_ADMIN">관리자</option>
          </select>
        </td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'MemberRead',
  props: {
    member: {
      type: Object,
      required: true,
    },
    jobCodes: {
      type: Array,
    },
  },
  computed: {
    auth1() {
      if (this.member.authList[0]) {
        return this.member.authList[0].auth;
      }
      return '';
    },
    auth2() {
      if (this.member.authList[1]) {
        return this.member.authList[1].auth;
      }
      return '';
    },
    auth3() {
      if (this.member.authList[2]) {
        return this.member.authList[2].auth;
      }
      return '';
    },
  }
};
</script>
