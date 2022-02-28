<template>
  <div>
    <h3>상품 목록 뷰</h3>
    <router-link
      :to="{ name: 'ItemReadPage', params: { itemId: 100 } }"
    >상품 상세보기</router-link>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class ItemList extends Vue {

}
</script>
