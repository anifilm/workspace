<template>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}의 가격:
      <input type="text" v-on:input="item.price = $event.target.value" v-bind:value="item.price" />
    </li>
  </ul>
  <hr />
  <item-list></item-list>
</template>

<script>
import { inject } from 'vue'; // inject 함수 임포트
import ItemList from './ItemList.vue';

export default {
  name: 'ItemMain',
  components: {
    ItemList,
  },
  setup() {
    const items = inject('items'); // 공유 데이터에 접근

    return {
      items,
    };
  },
};
</script>
