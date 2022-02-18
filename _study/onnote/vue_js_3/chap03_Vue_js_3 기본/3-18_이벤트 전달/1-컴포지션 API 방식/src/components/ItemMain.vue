<template>
  <ul>
    <li v-for="(item, index) in items" v-bind:key="item.name">
      <!-- 이벤트 수신 및 처리 -->
      <item-input
        v-bind:item="item"
        v-bind:item-index="index"
        v-on:change-price="handleChangePrice"
      ></item-input>
    </li>
  </ul>
  <hr />
  <item-list></item-list>
</template>

<script>
import { inject } from 'vue';
import ItemList from './ItemList.vue';
import ItemInput from './ItemInput.vue';

export default {
  name: 'ItemMain',
  components: {
    ItemList,
    ItemInput,
  },
  setup() {
    const items = inject('items');
    // TODO: changePrice가 undefined인 이유를 알아보자.
    const changePrice = inject('changePrice');
    console.log(changePrice);
    // change-price 이벤트 처리 메서드
    const handleChangePrice = (newPrice, index) => {
      changePrice(newPrice, index);
    };

    return {
      items,
      handleChangePrice, // 메서드 변수 반환
    };
  },
};
</script>
