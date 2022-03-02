<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>그룹코드</td>
        <td>
          <select v-model="groupCode" :value="codeDetail.groupCode" detail>
            <option v-for="codeGroup in codeGroups" :value="codeGroup.groupCode" :key="codeGroup.groupCode">
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
      <button type="submit">수정</button>
      <router-link :to="{ name: 'CodeDetailReadPage', params: { groupCode: codeDetail.groupCode, codeValue: codeDetail.codeValue } }">취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'CodeDetailModifyForm',
  props: {
    codeGroups: {
      type: Array,
    },
    codeDetail: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      groupCode: '',
      codeValue: '',
      codeName: '',
    };
  },
  methods: {
    onSubmit() {
      console.log('modify');
      const { groupCode, codeValue, codeName } = this;
      this.$emit('submit', { groupCode, codeValue, codeName });
    },
  },
  created() {
    this.groupCode = this.codeDetail.groupCode;
    this.codeValue = this.codeDetail.codeValue;
    this.codeName = this.codeDetail.codeName;
  },
};
</script>
