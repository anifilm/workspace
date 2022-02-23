<template>
  <form @submit.prevent="onAddPost">
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

<script>
import { ref } from 'vue';

export default {
  name: 'BoardRegisterForm',
  emits: ['add-post'],
  setup(props, context) {
    const title = ref('');
    const writer = ref('');
    const content = ref('');

    const onAddPost = () => {
      context.emit('add-post', {
        title: title.value,
        writer: writer.value,
        content: content.value,
      });
    };

    return {
      title,
      writer,
      content,
      onAddPost,
    }
  }
};
</script>
