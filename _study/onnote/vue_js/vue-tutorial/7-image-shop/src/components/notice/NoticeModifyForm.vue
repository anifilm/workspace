<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>번호</td>
        <td><input type="text" :value="notice.noticeNo" disabled /></td>
      </tr>
      <tr>
        <td>등록일시</td>
        <td><input type="text" :value="notice.regDate" disabled /></td>
      </tr>
      <tr>
        <td>제목</td>
        <td><input type="text" v-model="title" /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea v-model="content" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">수정</button>
      <router-link
        :to="{ name: 'NoticeReadPage', params: { noticeNo: notice.noticeNo.toString() } }"
      >취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'NoticeModifyForm',
  props: {
    notice: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      title: '',
      content: '',
    };
  },
  methods: {
    onSubmit() {
      const { title, content } = this;
      this.$emit('submit', { title, content });
    },
  },
  created() {
    this.title = this.notice.title;
    this.content = this.notice.content;
  },
};
</script>
