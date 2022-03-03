<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>제목</td>
        <td><input type="text" v-model="title" /></td>
      </tr>
      <tr>
        <td>작성자</td>
        <td><input type="text" :value="userInfo.userId" disabled /></td>
      </tr>
      <tr>
        <td>내용</td>
        <td><textarea v-model="content" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit" v-if="isAuthorized">등록</button>
      <router-link :to="{ name: 'BoardListPage' }">취소</router-link>
    </div>
  </form>
</template>

<script>
import { mapState, mapGetters } from 'vuex';

export default {
  name: 'BoardRegisterForm',
  data() {
    return {
      title: '',
      content: '',
    };
  },
  computed: {
    ...mapState(['userInfo']),
    ...mapGetters(['isAuthorized']),
  },
  methods: {
    onSubmit() {
      const { title, content } = this;
      this.$emit('submit', { title, content });
    },
  },
};
</script>
