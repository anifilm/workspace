<template>
  <div>
    <table>
      <tr>
        <th align="center" width="160">코드그룹코드</th>
        <th align="center" width="180">코드그룹명</th>
        <th align="center" width="160">등록일시</th>
      </tr>
      <tr v-if="!codeGroups || (Array.isArray(codeGroups) && codeGroups.length === 0)">
        <td colspan="3">List is empty.</td>
      </tr>
      <tr v-else v-for="codeGroup in codeGroups" :key="codeGroup.groupCode">
        <td align="center">{{ codeGroup.groupCode }}</td>
        <td align="left"><router-link :to="{ name: 'CodeGroupReadPage', params: { groupCode: codeGroup.groupCode } }">{{ codeGroup.groupName }}</router-link></td>
        <td align="center">{{ codeGroup.regDate }}</td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'CodeGroupList',
  props: {
    codeGroups: {
      type: Array,
    },
  },
};
</script>

<style scoped>
table {
  border-top: 1px solid lightgray;
  border-collapse: collapse;
}
th, td {
  border-bottom: 1px solid lightgray;
  padding: 10px;
}
</style>
