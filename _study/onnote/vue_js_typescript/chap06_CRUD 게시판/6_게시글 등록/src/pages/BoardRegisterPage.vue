<template>
  <div align="center">
    <h3>게시판 등록</h3>
    <board-register-form @submit="onSubmit" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import AxiosService from '../service';
import { Board } from '../store';

import BoardRegisterForm from '../components/BoardRegisterForm.vue';

@Component({
  components: {
    BoardRegisterForm,
  },
})
export default class BoardRegisterPage extends Vue {
  onSubmit(payload: Board) {
    const { title, content, writer } = payload;
    AxiosService.instance.post('/boards', { title, content, writer })
      .then((res) => {
        alert('등록되었습니다.');
        this.$router.push({
          name: 'BoardReadPage',
          params: { boardNo: res.data.boardNo },
        });
      })
      .catch((err) => {
        alert(err.response.data.message);
      });
  }
}
</script>
