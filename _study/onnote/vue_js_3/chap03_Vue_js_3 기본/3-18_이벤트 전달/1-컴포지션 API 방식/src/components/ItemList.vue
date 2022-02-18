<template>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
  <p>합계: {{ totalPrice }}원</p>
</template>

<script>
import { computed, inject } from 'vue';

export default {
  name: 'ItemList',
  setup() {
    const items = inject('items');

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
