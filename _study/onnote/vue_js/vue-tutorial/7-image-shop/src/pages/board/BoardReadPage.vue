<template>

</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import BoardRead from '@/components/board/BoardRead.vue';

export default {
  name: 'BoardReadPage',
  components: {
    BoardRead,
  },
  props: {
    boardNo: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['board', 'userInfo']),
    ...mapGetters(['isAuthorized', 'isAdmin']),
  },
  methods: {
    ...mapActions(['fetchBoard']),
    onDelete() {

    },
  },
  created() {
    this.fetchBoard(this.boardNo);
  },
};
</script>
