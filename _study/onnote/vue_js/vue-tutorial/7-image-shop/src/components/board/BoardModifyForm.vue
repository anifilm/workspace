<template>

</template>

<script>
export default {
  name: 'BoardModifyForm',
  props: {
    board: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      title: '',
      content: '',
      writer: '',
    };
  },
  methods: {
    onSubmit() {

    },
  },
  craeted() {
    this.title = this.board.title;
    this.content = this.board.content;
    this.writer = this.board.writer;
  },
};
</script>
