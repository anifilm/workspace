<template>
  <div>
    {{ itemName }}의 가격:
    <input type="text" v-on:input="changePrice" v-bind:value="itemPrice" />
  </div>
</template>

<script>
export default {
  name: 'item-input',
  props: [
    'itemName',
    'itemPrice',
    'itemIndex'
  ],
  methods: {
    // 하위에서 상위컴포넌트로 이벤트 전달
    changePrice(event) {
      const newPrice = event.target.value;
      console.log('newPrice:', newPrice);
      // change-price 이벤트 발생
      this.$emit('change-price', newPrice, this.itemIndex);
    }
  }
};
</script>
