<template>
  <div align="center">
    <h3>게시글 등록</h3>
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
              boardNo: res.data.boardNo,
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
