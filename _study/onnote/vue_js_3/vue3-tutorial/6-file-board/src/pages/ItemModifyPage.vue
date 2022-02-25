<template>
  <div align="center">
    <h3>게시글 수정</h3>
    <item-modify-form />
  </div>
</template>

<script>
import ItemModifyForm from '../components/ItemModifyForm.vue';

export default {
  name: 'ItemModifyPage',
  components: {
    ItemModifyForm,
  },
};
</script>
