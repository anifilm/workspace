<template>
  <div align="center">
    <h2>상품 수정</h2>
    <item-modify-form />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import ItemModifyForm from '../components/ItemModifyForm.vue';

@Component({
  components: {
    ItemModifyForm,
  },
})
export default class ItemModifyPage extends Vue {

}
</script>
