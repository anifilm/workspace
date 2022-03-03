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
        <td><input type="file" @change="handleFileChange($event)" style="width: 180px" /></td>
      </tr>
      <tr>
        <td>미리보기파일</td>
        <td><input type="file" @change="handlePreviewFileChange($event)" style="width: 180px" /></td>
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

<script>
export default {
  name: 'ItemRegisterForm',
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
};
</script>
