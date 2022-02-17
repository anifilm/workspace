<template>
  <h2>Vue data 속성 (컴포지션 API 방식)</h2>
  <h1>{{ message }}</h1>
  <p>{{ items }}</p>
</template>

<script>
import { ref } from 'vue'; // ref 컴포지션 함수 임포트

export default {
  setup() {
    // 반응형 변수 선언
    const message = ref('Hello Vue!');
    // 배열 타입의 반응형 변수 선언
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
    // 변수 반환
    return {
      message,
      items
    };
  },
};
</script>
