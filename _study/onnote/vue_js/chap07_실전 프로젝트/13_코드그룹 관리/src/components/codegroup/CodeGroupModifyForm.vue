<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>코드그룹코드</td>
        <td><input type="text" :value="codeGroup.groupCode" disabled></td>
      </tr>
      <tr>
        <td>코드그룹명</td>
        <td><input type="text" v-model="groupName"></td>
      </tr>
    </table>
    <div>
      <button type="submit">수정</button>
      <router-link :to="{ name: 'CodeGroupReadPage', params: { groupCode: codeGroup.groupCode } }">취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'CodeGroupModifyForm',
  props: {
    codeGroup: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      groupName: ''
    }
  },
  methods: {
    onSubmit() {
      const { groupName } = this;
      this.$emit('submit', { groupName });
    },
  },
  created() {
    this.groupName = this.codeGroup.groupName
  }
};
</script>
