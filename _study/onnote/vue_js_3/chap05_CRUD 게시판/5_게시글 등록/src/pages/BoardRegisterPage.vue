<template>
  <div align="center">
    <h2>게시글 등록</h2>
    <board-register-form @add-post="addPost" />
  </div>
</template>

<script>
import client from '../modules/client';
import { router } from '../router';

import BoardRegisterForm from '../components/BoardRegisterForm.vue';

export default {
  name: 'BoardRegisterPage',
  components: {
    BoardRegisterForm,
  },
  setup() {
    const addPost = (payload) => {
      const { title, writer, content } = payload;
      client.post('/boards', { title, content, writer })
        .then((res) => {
          alert('등록되었습니다.');
          router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    };

    return {
      addPost,
    };
  },
};
</script>
