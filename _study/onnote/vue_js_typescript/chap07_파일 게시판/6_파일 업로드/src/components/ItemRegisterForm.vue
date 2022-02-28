<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>상품명</td>
        <td><input type="text" v-model="itemName" /></td>
      </tr>
      <tr>
        <td>상품가격</td>
        <td><input type="text" v-model="price" />원</td>
      </tr>
      <tr>
        <td>상품파일</td>
        <td><input type="file" @change="handleFileChange($event)" /></td>
      </tr>
      <tr>
        <td>상품설명</td>
        <td><textarea v-model="description" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">등록</button>
      <router-link :to="{ name: 'ItemListPage' }">취소</router-link>
    </div>
  </form>
</template>

<script lang="ts">
import { Component, Vue, Emit } from 'vue-property-decorator';

@Component
export default class ItemRegisterForm extends Vue {
  // data 속성 정의
  itemName: string = '';
  price: number = 0;
  description: string = '';
  file!: File;

  // 파일 선택 처리 메서드 정의
  handleFileChange(e: Event) {
    const target = e.target as HTMLInputElement;
    const files: FileList | null = target.files;
    if (files) {
      this.file = files[0];
    }
  }

  // submit 이벤트 핸들러 메서드 정의
  @Emit('submit')
  onSubmit() {
    const { itemName, price, description, file } = this;
    return {
      itemName,
      price,
      description,
      file
    };
  }
}
</script>
