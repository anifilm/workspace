<template>
  <div align="center">
    <h3>상품 상세보기</h3>
    <item-read v-if="item" :item="item" />
    <router-link
      :to="{ name: 'ItemModifyPage', params: { itemId } }"
    >수정</router-link>
    <button @click="onDelete">삭제</button>
    <router-link :to="{ name: 'ItemListPage' }">목록</router-link>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import { Item } from '../store';
import AxiosService from '../service';

import ItemRead from '../components/ItemRead.vue';

@Component({
  components: {
    ItemRead,
  },
})
export default class ItemReadPage extends Vue {
  // props 속성에 넘겨받는 값 itemId 정의
  @Prop() itemId!: number;
  // 스토어 상태 맵핑
  @State readonly item!: Item;
  // 스토어 액션 맵핑
  @Action readonly fetchItem: any;

  // 상품 삭제
  onDelete() {
    const { itemId } = this.item;
    AxiosService.instance.delete(`/items/${itemId}`)
      .then((res) => {
        alert('삭제되었습니다.');
        this.$router.push({ name: 'ItemListPage' });
      })
      .catch((err) => {
        alert(err.response.data.msg);
      });
  }

  created() {
    this.fetchItem(this.itemId)
      .catch((err: any) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  }
}
</script>
