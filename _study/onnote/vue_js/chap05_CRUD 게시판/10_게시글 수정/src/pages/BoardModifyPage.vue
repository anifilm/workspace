<template>
  <div align="center">
    <h3>게시글 수정</h3>
    <board-modify-form v-if="board" :board="board" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '../api';
import BoardModifyForm from '../components/BoardModifyForm.vue';

export default {
  name: 'BoardModifyPage',
  components: {
    BoardModifyForm,
  },
  props: {
    boardNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['board']),
  },
  methods: {
    ...mapActions(['fetchBoard']),
    onSubmit(payload) {
      const { title, content } = payload;
      api.put(`/boards/${this.boardNo}`, { title, content })
        .then((res) => {
          alert('수정되었습니다.');
          this.$router.push({
            name: 'BoardReadPage',
            params: {
              boardNo: res.data.boardNo.toString(),
            },
          });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
  created() {
    this.fetchBoard(this.boardNo)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
