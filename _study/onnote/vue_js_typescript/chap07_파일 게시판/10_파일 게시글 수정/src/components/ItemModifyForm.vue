<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>상품번호</td>
        <td><input type="text" :value="item.itemId" disabled></td>
      </tr>
      <tr>
        <td>상품명</td>
        <td><input type="text" v-model="itemName"></td>
      </tr>
      <tr>
        <td>상품가격</td>
        <td><input type="text" v-model="price">원</td>
      </tr>
      <tr>
        <td>상품파일</td>
        <td><input type="file" @change="handleFileChange($event)" /></td>
      </tr>
      <tr>
        <td>미리보기</td>
        <td><img v-bind:src="pictureUrl()" width="170"></td>
      </tr>
      <tr>
        <td>상품설명</td>
        <td><textarea v-model="description" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">수정</button>
      <router-link
        :to="{ name: 'ItemReadPage', params: { itemId: item.itemId.toString() } }"
      >취소</router-link>
    </div>
  </form>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { Item } from '../store';

@Component
export default class ItemModifyForm extends Vue {
  // props 속성에 item 정의
  @Prop() item!: Item;

  // 폼 요소들과 바인딩할 데이터 정의
  itemName: string = '';
  price: number = 0;
  description: string = '';
  file!: File;

  pictureUrl() {
    return `http://localhost:8080/items/display?itemId=${this.item.itemId}&timestamp=${new Date().getTime()}`;
  }

  handleFileChange(e: Event) {
    const target = e.target as HTMLInputElement;
    const files: FileList | null = target.files;
    if (files) {
      this.file = files[0];
      //console.log(this.file);
    }
  }

  onSubmit() {
    const { itemName, price, description, file } = this;
    this.$emit('submit', { itemName, price, description, file });
  }

  created() {
    this.itemName = this.item.itemName;
    this.price = this.item.price;
    this.description = this.item.description;
  }
}
</script>
