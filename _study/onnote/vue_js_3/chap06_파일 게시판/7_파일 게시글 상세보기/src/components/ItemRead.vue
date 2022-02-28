<template>
  <div>
    <table>
      <tr>
        <td>상품번호</td>
        <td><input type="text" :value="item.itemId" readonly></td>
      </tr>
      <tr>
        <td>상품명</td>
        <td><input type="text" :value="item.itemName" readonly></td>
      </tr>
      <tr>
        <td>상품가격</td>
        <td><input type="text" :value="item.price" readonly>원</td>
      </tr>
      <tr>
        <td>미리보기</td>
        <td><img v-bind:src="pictureUrl" width="170"></td>
      </tr>
      <tr>
        <td>상품설명</td>
        <td><textarea :value="item.description" cols="23" rows="5" readonly></textarea></td>
      </tr>
    </table>
  </div>
</template>

<script>
import { ref, onBeforeUpdate } from 'vue';

export default {
  name: 'ItemRead',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  setup(props) {
    const pictureUrl = ref('');

    onBeforeUpdate(() => {
      pictureUrl.value = `http://localhost:8080/items/display?itemId=${props.item.itemId}&timestamp=${new Date().getTime()}`;
    });

    return {
      pictureUrl,
    };
  },
};
</script>
