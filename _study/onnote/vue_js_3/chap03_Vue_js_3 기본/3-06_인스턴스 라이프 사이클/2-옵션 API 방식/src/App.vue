<template>
  <h2>Vue 인스턴스 라이프 사이클 (기존 옵션 API 방식)</h2>
  <h1>{{ message }}</h1>
</template>

<script>
export default {
  data() {
    return {
      message: 'Hello Vue!',
    };
  },
  beforeCreate() {
    // 인스턴스가 생성되고, 리액티브 초기화가 시작되기 전 단계
    console.log('beforeCreate');
  },
  created() {
    // 인스턴스가 생성되고, 리액티브 초기화가 이루어진 후 단계
    console.log('created');
  },
  beforeMount() {
    // 인스턴스가 마운트되기 전 단계
    console.log('beforeMount');
  },
  mounted() {
    // 인스턴스가 마운트된 후 단계
    console.log('mounted');
  },
  beforeUpdate() {
    // 데이터가 변경되어 DOM에 적용되기 전 단계
    console.log('beforeUpdate');
  },
  updated() {
    // 데이터가 변경되어 DOM에 적용된 후 단계
    console.log('updated');
  },
  beforeDestroy() {
    // 인스턴스가 제거되기 직전에 호출
    console.log('beforeDestroy');
  },
  destroyed() {
    // 인스턴스가 제거되고 난 이후 호출
    console.log('destroyed');
  },
};
</script>
