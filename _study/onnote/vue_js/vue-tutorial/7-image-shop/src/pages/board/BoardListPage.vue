<template>

</template>

<script>
import { mapState, mapGetters, mapActions } from 'vuex';

import BoardList from '@/components/board/BoardList.vue';

export default {
  name: 'BoardListPage',
  components: {
    BoardList,
  },
  computed: {
    ...mapState(['boards']),
    ...mapGetters(['isMember']),
  },
  methods: {
    ...mapActions(['fetchBoardList']),
  },
  mounted() {
    this.fetchBoardList();
  },
};
</script>
