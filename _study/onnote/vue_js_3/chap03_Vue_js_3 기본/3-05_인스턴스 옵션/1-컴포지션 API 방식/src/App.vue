<template>
  <h2>Vue 인스턴스 (컴포지션 API 방식)</h2>
  <h1>{{ message }}</h1>
</template>

<script>
export default {
  // 컴포지션 setup 함수
  setup() {
    // message 변수 선언
    const message = 'Hello Vue!';
    // message 변수 반환
    return {
      message,
    };
  },
};
</script>
