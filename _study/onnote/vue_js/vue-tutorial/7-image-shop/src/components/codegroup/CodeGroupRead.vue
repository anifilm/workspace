<template>
  <div>
    <table>
      <tr>
        <td>코드그룹코드</td>
        <td><input type="text" :value="codeGroup.groupCode" readonly /></td>
      </tr>
      <tr>
        <td>코드그룹명</td>
        <td><input type="text" :value="codeGroup.groupName" readonly /></td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'CodeGroupRead',
  props: {
    codeGroup: {
      type: Object,
      required: true,
    },
  },
};
</script>
