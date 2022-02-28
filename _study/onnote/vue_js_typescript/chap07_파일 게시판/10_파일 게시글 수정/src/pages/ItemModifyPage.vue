<template>
  <div align="center">
    <h2>상품 수정</h2>
    <item-modify-form v-if="item" :item="item" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
import AxiosService from '../service';
import { Item } from '../store';

import ItemModifyForm from '../components/ItemModifyForm.vue';

@Component({
  components: {
    ItemModifyForm,
  },
})
export default class ItemModifyPage extends Vue {
  // props 속성에 itemId 정의
  @Prop() private itemId!: number;
  // 스토어 상태 맵핑
  @State readonly item!: Item;
  // 스토어 액션 함수 fetchItem()을 컴포넌트에 맵핑
  @Action readonly fetchItem: any;

  onSubmit(payload: Item) {
    const { itemName, price, description, file } = payload;

    const itemObject = {
      itemId: this.itemId,
      itemName,
      price,
      description,
    };

    let formData = new FormData();
    formData.append('file', file);
    formData.append('item', JSON.stringify(itemObject));

    AxiosService.instance
      .put('/items', formData, {
        headers: { 'Content-Type': 'multipart/form-data' },
      })
      .then((res) => {
        alert('수정되었습니다.');
        this.$router.push({
          name: 'ItemReadPage',
          params: {
            itemId: res.data.itemId.toString(),
          },
        });
      })
      .catch((err) => {
        alert(err.response.data.msg);
      });
  }

  create() {
    this.fetchItem(this.itemId)
      .catch((err: any) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  }
}
</script>
