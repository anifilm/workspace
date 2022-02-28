<template>
  <div align="center">
    <h3>상품 목록</h3>
    <router-link :to="{ name: 'ItemRegisterPage' }">새로만들기</router-link>
    <item-list :items="items" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import { Item } from '../store';

import ItemList from '../components/ItemList.vue';

@Component({
  components: {
    ItemList,
  },
})
export default class ItemListPage extends Vue {
  // 스토어 상태 맵핑
  @State readonly items!: Item[];
  // 스토어 액션 맵핑
  @Action readonly fetchItemList: any;

  created() {
    this.fetchItemList();
  }
}
</script>
