<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>제목</td>
        <td><input type="text" v-model="title" /></td>
      </tr>
      <tr>
        <td>작성자</td>
        <td><input type="text" v-model="writer" /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea v-model="content" rows="5"></textarea></td>
      </tr>
    </table>
    <div>
      <button type="submit">등록</button>
      <router-link :to="{ name: 'BoardReadPage' }">취소</router-link>
    </div>
  </form>
</template>

<script>
export default {
  name: 'BoardRegisterForm',
  data() {
    return {
      title: '',
      content: '',
      writer: '',
    };
  },
  methods: {
    onSubmit() {
      const { title, content, writer } = this;
      this.$emit('submit', { title, content, writer });
    },
  },
};
</script>
