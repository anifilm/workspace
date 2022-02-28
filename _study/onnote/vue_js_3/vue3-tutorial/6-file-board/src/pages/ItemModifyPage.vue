<template>
  <div align="center">
    <h2>상품 수정</h2>
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
