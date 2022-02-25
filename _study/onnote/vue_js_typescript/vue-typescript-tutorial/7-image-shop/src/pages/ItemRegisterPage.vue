<template>
  <div align="center">
    <h3>게시글 등록</h3>
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
