<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>그룹코드</td>
        <td>
          <select v-model="groupCode">
            <option v-for="codeGroup in codeGroups" :value="codeGroup.groupCode">
              {{ codeGroup.groupName }}
            </option>
          </select>
        </td>
      </tr>
      <tr>
        <td>코드값</td>
        <td><input type="text" v-model="codeValue"></td>
      </tr>
      <tr>
        <td>코드명</td>
        <td><input type="text" v-model="codeName"></td>
      </tr>
    </table>
    <div>
      <button type="submit">등록</button>
      <router-link :to="{ name: 'CodeDetailListPage' }">목록</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'CodeDetailRegisterForm',
  props: {
    codeGroups: {
      type: Array,
    },
  },
  data() {
    return {
      groupCode: 'A01',
      codeValue: '',
      codeName: '',
    };
  },
  methods: {
    onSubmit() {
      const { groupCode, codeValue, codeName } = this;
      this.$emit('submit', { groupCode, codeValue, codeName });
    },
  },
};
</script>
