<template>
  <h2>Vue data 속성 (기존 옵션 API 방식)</h2>
  <h1>{{ message }}</h1>
  <p>{{ items }}</p>
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
