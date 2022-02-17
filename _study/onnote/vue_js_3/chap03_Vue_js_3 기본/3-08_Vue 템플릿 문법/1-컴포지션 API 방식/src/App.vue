<template>
  <h2>Vue 템플릿 문법 (컴포지션 API 방식)</h2>
  <h1>{{ message }}</h1>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
</template>

<script>
import { ref } from 'vue';

export default {
  setup() {
    const message = ref('Hello Vue!');
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

    return {
      message,
      items,
    };
  },
};
</script>
