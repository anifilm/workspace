<template>
  <div align="center">
    <h3>게시글 등록</h3>
    <item-register-form />
  </div>
</template>

<script>
import ItemRegisterForm from '../components/ItemRegisterForm.vue';

export default {
  name: 'ItemRegisterPage',
  components: {
    ItemRegisterForm,
  },
};
</script>
