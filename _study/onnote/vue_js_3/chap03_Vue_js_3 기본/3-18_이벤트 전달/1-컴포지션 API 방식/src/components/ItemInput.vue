<template>
  <div>
    {{ item.name }}의 가격:
    <input type="text" v-on:input="changePrice" v-bind:value="item.price" />
  </div>
</template>

<script>
export default {
  name: 'ItemInput',
  props: ['item', 'itemIndex'],
  emits: ['change-price'], // 전송할 이벤트 정의
  setup(props, context) {
    const changePrice = (event) => {
      const newPrice = event.target.value;
      // 이벤트 발생
      context.emit('change-price', newPrice, props.itemIndex);
    };

    return {
      changePrice,
    };
  },
};
</script>
