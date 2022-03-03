<template>

</template>

<script>
import { mapState } from 'vuex';
import api from '@/api';

import BoardModifyForm from '@/components/board/BoardModifyForm.vue';

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
    ...mapState(['boards']),
  },
  methods: {
    onSubmit(payload) {

    },
  },
};
</script>
