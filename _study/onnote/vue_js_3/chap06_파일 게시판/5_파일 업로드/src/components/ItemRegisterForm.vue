<template>
  <form @submit.prevent="onAddPost">
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
        <td><input type="file" @change="changeFile($event)" style="width: 180px" /></td>
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
import { ref } from 'vue';

export default {
  name: 'ItemRegisterForm',
  emits: ['add-post'],
  setup(props, context) {
    // 반응형 변수로 데이터 정의
    const itemName = ref('');
    const price = ref('');
    const description = ref('');
    const file = ref('');

    const changeFile = (e) => {
      file.value = e.target.files[0];
      //console.log(file.value);
    }

    const onAddPost = () => {
      context.emit('add-post', {
        itemName: itemName.value,
        price: price.value,
        description: description.value,
        file: file.value,
      });
    };

    return {
      itemName,
      price,
      description,
      file,
      changeFile,
      onAddPost,
    };
  }
};
</script>
