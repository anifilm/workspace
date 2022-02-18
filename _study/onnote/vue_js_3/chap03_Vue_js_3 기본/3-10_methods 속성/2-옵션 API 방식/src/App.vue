<template>
  <h2>Vue methods 속성 (기존 옵션 API 방식)</h2>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}의 가격:
      <input type="text" v-on:input="item.price = $event.target.value" v-bind:value="item.price" />
    </li>
  </ul>
  <hr />
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
  <p>합계: {{ totalPrice() }}원</p>
</template>

<script>
export default {
  data() {
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
      items: items,
    };
  },
  methods: {
    totalPrice() {
      return this.items.reduce((sum, item) => {
        return sum + item.price * item.quantity;
      }, 0);
    },
  },
};
</script>
