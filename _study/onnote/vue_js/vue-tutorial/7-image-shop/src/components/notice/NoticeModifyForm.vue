<template>

</template>

<script>
export default {
  name: 'NoticeModifyForm',
  props: {
    notice: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      title: '',
      content: '',
    };
  },
  methods: {
    onSubmit() {

    },
  },
  created() {
    this.title = this.notice.title;
    this.content = this.notice.content;
  },
};
</script>
