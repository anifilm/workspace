<template>
  <h2>Vue watch 속성 (기존 옵션 API 방식)</h2>
  메인보드의 가격: <input type="text" v-on:input="price = $event.target.value" v-bind:value="price" />
</template>

<script>
export default {
  data() {
    return {
      price: 112053,
    };
  },
  watch: {
    price(nextValue, prevValue) {
      console.log('price의 변경되기 이전 값:', prevValue);
      console.log('price의 변경된 이후 값:', nextValue);
    },
  },
};
</script>
