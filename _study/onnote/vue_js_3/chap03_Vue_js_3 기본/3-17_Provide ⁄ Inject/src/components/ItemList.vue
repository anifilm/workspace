<template>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
  <p>합계: {{ totalPrice }}원</p>
</template>

<script>
import { computed, inject } from 'vue'; // inject 함수 임포트

export default {
  name: 'ItemList',
  setup() {
    const items = inject('items'); // 공유 데이터에 접근

    const totalPrice = computed(() => {
      return items.value.reduce(function (sum, item) {
        return sum + item.price * item.quantity;
      }, 0);
    });

    return {
      items,
      totalPrice,
    };
  },
};
</script>
