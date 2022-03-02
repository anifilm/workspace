<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>그룹코드</td>
        <td><input type="text" v-model="groupCode"></td>
      </tr>
      <tr>
        <td>그룹코드명</td>
        <td><input type="text" v-model="groupName"></td>
      </tr>
    </table>
    <div>
      <button type="submit">등록</button>
      <router-link :to="{ name: 'CodeGroupListPage' }">목록</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'CodeGroupRegisterForm',
  data() {
    return {
      groupCode: '',
      groupName: '',
    }
  },
  methods: {
    onSubmit() {
      const { groupCode, groupName } = this;
      this.$emit('submit', { groupCode, groupName });
    },
  },
};
</script>
