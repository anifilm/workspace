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
        <td>상품설명</td>
        <td><textarea v-model="description" cols="23" rows="5"></textarea></td>
      </tr>
    </table>
    <br />
    <div>
      <router-link :to="{ name: 'ItemListPage' }" class="waves-effect waves-light btn">취소</router-link>&nbsp;
      <button type="submit" class="waves-effect waves-light btn blue">등록</button>
    </div>
  </form>
</template>

<script>
export default {
  name: 'ItemRegisterForm',
  data() {
    return {
      itemName: '',
      price: '',
      description: '',
      file: '',
    }
  },
  methods: {
    handleFileChange(e) {
      this.file = e.target.files[0];
      //console.log(this.file);
    },
    onSubmit() {
      const { itemName, price, description, file } = this;
      this.$emit('submit', { itemName, price, description, file });
    },
  },
};
</script>
