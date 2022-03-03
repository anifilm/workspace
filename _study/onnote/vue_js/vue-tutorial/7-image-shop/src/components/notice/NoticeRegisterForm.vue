<template>
  <form @submit.prevent="onSubmit">
    <table>
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
      <button type="submit">등록</button>
      <router-link :to="{ name: 'NoticeListPage' }">취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'NoticeRegisterForm',
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
};
</script>
