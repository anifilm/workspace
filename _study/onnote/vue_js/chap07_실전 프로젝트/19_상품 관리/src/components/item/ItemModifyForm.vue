<template>
  <form @submit.prevent="onSubmit">
    <table>
      <tr>
        <td>상품번호</td>
        <td><input type="text" :value="item.itemId" disabled /></td>
      </tr>
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
        <td><input type="file" @change="handleFileChange($event)" style="width: 180px" /></td>
      </tr>
      <tr>
        <td>미리보기</td>
        <td><img v-bind:src="pictureUrl()" width="170" /></td>
      </tr>
      <tr>
        <td>미리보기파일</td>
        <td><input type="file" @change="handlePreviewFileChange($event)" style="width: 180px" /></td>
      </tr>
      <tr>
        <td>미리보기</td>
        <td><img v-bind:src="previewUrl()" width="170" /></td>
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

<script>
export default {
  name: 'ItemModifyForm',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      itemName: '',
      price: 0,
      description: '',
      file: '',
      previewFile: '',
    };
  },
  methods: {
    pictureUrl() {
      return `http://localhost:8080/items/display?itemId=${this.item.itemId}&timestamp=${new Date().getTime()}`;
    },
    previewUrl() {
      return `http://localhost:8080/items/preview?itemId=${this.item.itemId}&timestamp=${new Date().getTime()}`;
    },
    handleFileChange(e) {
      this.file = e.target.files[0];
    },
    handlePreviewFileChange(e) {
      this.previewFile = e.target.files[0];
    },
    onSubmit() {
      const { itemName, price, description, file, previewFile } = this;
      this.$emit('submit', { itemName, price, description, file, previewFile });
    },
  },
  created() {
    this.itemName = this.item.itemName;
    this.price = this.item.price;
    this.description = this.item.description;
  },
};
</script>
