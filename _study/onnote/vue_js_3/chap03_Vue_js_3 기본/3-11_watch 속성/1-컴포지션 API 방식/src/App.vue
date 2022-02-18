<template>
  <h2>Vue watch 속성 (컴포지션 API 방식)</h2>
  메인보드의 가격: <input type="text" v-on:input="price = $event.target.value" v-bind:value="price" />
</template>

<script>
import { ref, watch } from 'vue'; // watch 컴포지션 함수 임포트

export default {
  setup() {
    const price = ref(112053);
    // watch 속성
    watch(
      price,
      (cur, prev) => {
        console.log('price의 변경되기 이전 값:', prev);
        console.log('price의 변경된 값:', cur);
      },
      { immediate: true },
    );

    return {
      price,
    };
  },
};
</script>
