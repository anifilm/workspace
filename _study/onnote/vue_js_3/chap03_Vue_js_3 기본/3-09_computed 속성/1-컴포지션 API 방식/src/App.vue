<template>
  <h2>Vue computed 속성 (컴포지션 API 방식)</h2>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}의 가격:
      <input type="text" v-on:input="item.price = $event.target.value" v-bind:value="item.price" />
    </li>
  </ul>
  <hr />
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
  <p>합계: {{ totalPrice }}원</p>
</template>

<script>
import { ref, computed } from 'vue';

export default {
  setup() {
    const items = ref([
      {
        name: 'CPU',
        price: 462984,
        quantity: 1,
      },
      {
        name: '메인보드',
        price: 112053,
        quantity: 1,
      },
      {
        name: '메모리',
        price: 112053,
        quantity: 2,
      },
    ]);

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
