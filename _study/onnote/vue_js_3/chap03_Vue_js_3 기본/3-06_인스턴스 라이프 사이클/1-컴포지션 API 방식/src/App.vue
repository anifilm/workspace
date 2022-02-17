<template>
  <h2>Vue 인스턴스 라이프 사이클 (컴포지션 API 방식)</h2>
  <h1>{{ message }}</h1>
</template>

<script>
import { onBeforeMount, onMounted, onBeforeUpdate, onUpdated } from 'vue';

export default {
  setup() {
    const message = 'Hello Vue!';

    // 인스턴스가 마운트되기 이전 단계
    onBeforeMount(() => {
      console.log('beforeMount');
    });

    // 인스턴스가 마운트된 이후 단계
    onMounted(() => {
      console.log('mounted');
    });

    // 데이터가 변경되어 DOM에 적용되기 이전 단계
    onBeforeUpdate(() => {
      console.log('onBeforeUpdate');
    });

    // 데이터가 변경되어 DOM에 적용된 이후 단계
    onUpdated(() => {
      console.log('updated');
    });

    return {
      message,
    };
  },
};
</script>
