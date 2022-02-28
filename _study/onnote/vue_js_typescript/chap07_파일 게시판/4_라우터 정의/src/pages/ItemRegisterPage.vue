<template>
  <div align="center">
    <h2>상품 등록</h2>
    <item-register-form />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import ItemRegisterForm from '../components/ItemRegisterForm.vue';

@Component({
  components: {
    ItemRegisterForm,
  },
})
export default class ItemRegisterPage extends Vue {

}
</script>
