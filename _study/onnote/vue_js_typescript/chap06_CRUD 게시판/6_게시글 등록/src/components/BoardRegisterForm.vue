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
      <router-link :to="{ name: 'BoardListPage' }">취소</router-link>
    </div>
  </form>
</template>

<script lang="ts">
import { Component, Vue, Emit } from 'vue-property-decorator';

@Component
export default class BoardRegisterForm extends Vue {
  title: string = '';
  content: string = '';
  writer: string = '';

  @Emit('submit')
  onSubmit() {
    const { title, content, writer } = this;

    return {
      title,
      content,
      writer,
    };
  }
}
</script>
