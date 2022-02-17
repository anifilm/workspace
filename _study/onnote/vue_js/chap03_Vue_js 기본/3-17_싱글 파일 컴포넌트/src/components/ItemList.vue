<template>
  <div>
    <ul>
      <li v-for="item in items" v-bind:key="item.name">
        {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
      </li>
    </ul>
    <p>합계: {{ totalPrice }}원</p>
  </div>
</template>

<script>
export default {
  name: 'item-list',
  props: ['items'],
  computed: {
    totalPrice() {
      return this.items.reduce((sum, item) => {
        return sum + item.price * item.quantity;
      }, 0);
    }
  }
};
</script>
