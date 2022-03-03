<template>
  <div>
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="notice.noticeNo" readonly /></td>
      </tr>
      <tr>
        <td>등록일시</td>
        <td><input type="text" :value="notice.regDate" readonly /></td>
      </tr>
      <tr>
        <td>제목</td>
        <td><input type="text" :value="notice.title" readonly /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea :value="notice.content" cols="23" rows="5" readonly></textarea></td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'NoticeRead',
  props: {
    notice: {
      type: Object,
      required: true,
    },
  },
};
</script>
