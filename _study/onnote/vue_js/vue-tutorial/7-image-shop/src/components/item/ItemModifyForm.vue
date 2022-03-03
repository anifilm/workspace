<template>

</template>

<script>
export default {
  name: 'ItemModifyForm',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      itemName: '',
      price: 0,
      description: '',
      file: '',
      previewFile: '',
    };
  },
  methods: {
    handleFileChange(e) {

    },
    handlePreviewFileChange(e) {

    },
    onSubmit() {

    },
  },
  created() {
    this.itemName = this.item.itemName;
    this.price = this.item.price;
    this.description = this.item.description;
  },
};
</script>
