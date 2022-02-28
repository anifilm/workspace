<template>
  <form @submit.prevent="onModifyPost">
    <table>
      <tr>
        <td>상품번호</td>
        <td><input type="text" :value="item.itemId" disabled></td>
      </tr>
      <tr>
        <td>상품명</td>
        <td><input type="text" v-model="item.itemName"></td>
      </tr>
      <tr>
        <td>상품가격</td>
        <td><input type="text" v-model="item.price">원</td>
      </tr>
      <tr>
        <td>상품파일</td>
        <td><input type="file" @change="changeFile($event)" style="width: 180px" /></td>
      </tr>
      <tr>
        <td>미리보기</td>
        <td><img v-bind:src="pictureUrl" width="170"></td>
      </tr>
      <tr>
        <td>상품설명</td>
        <td><textarea v-model="item.description" cols="23" rows="5"></textarea></td>
      </tr>
    </table>

    <div>
      <button type="submit">수정</button>
      <router-link
        :to="{ name: 'ItemReadPage', params: { itemId } }"
      >취소</router-link>
    </div>
  </form>
</template>

<script>
import { ref, onBeforeUpdate } from 'vue';
import { useRoute } from 'vue-router';

export default {
  name: 'ItemModifyForm',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  emit: ['modify-post'],
  setup(props, context) {
    const pictureUrl = ref('');
    const file = ref('');

    const route = useRoute();
    const itemId = route.params.itemId;

    onBeforeUpdate(() => {
      pictureUrl.value = `http://localhost:8080/items/display?itemId=${props.item.itemId}&timestamp=${new Date().getTime()}`;
    });

    const changeFile = (e) => {
      file.value = e.target.files[0];
      //console.log(file.value);
    }

    const onModifyPost = () => {
      context.emit('modify-post', {
        itemName: props.item.itemName,
        price: props.item.price,
        description: props.item.description,
        file: file.value,
      });
    };

    return {
      pictureUrl,
      itemId,
      changeFile,
      onModifyPost,
    };
  },
};
</script>
