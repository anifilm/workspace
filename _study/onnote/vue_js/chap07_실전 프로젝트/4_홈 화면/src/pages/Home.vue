<template>
  <div align="center">
    <h1>Image Shop에 오신 것을 환영합니다.</h1>
    <p>{{ getTime() }}</p>
  </div>
</template>

<script>
export default {
  name: 'Home',
  methods: {
    getTime() {
      return new Date().toString();
    },
  },
};
</script>
