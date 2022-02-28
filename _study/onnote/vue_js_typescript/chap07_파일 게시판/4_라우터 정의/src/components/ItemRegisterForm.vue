<template>
  <div>
    <h3>상품 등록 폼</h3>
    <button type="submit">등록</button>
    <router-link :to="{ name: 'ItemListPage' }">취소</router-link>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class ItemRegisterForm extends Vue {

}
</script>
