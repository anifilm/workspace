<template>
  <h2>Vue 템플릿 문법 (기존 옵션 API 방식)</h2>
  <h1>{{ message }}</h1>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
</template>

<script>
export default {
  data() {
    const message = 'Hello Vue!';
    const items = [
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
    ];

    return {
      message: message,
      items: items,
    };
  },
};
</script>
