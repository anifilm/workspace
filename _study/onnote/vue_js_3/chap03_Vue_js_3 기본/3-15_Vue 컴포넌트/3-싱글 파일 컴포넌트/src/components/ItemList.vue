<template>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}: {{ item.price }} x {{ item.quantity }} = {{ item.price * item.quantity }}원
    </li>
  </ul>
  <p>합계: {{ totalPrice }}원</p>
</template>

<script>
import { computed } from 'vue';

export default {
  props: {
    items: {
      type: Object,
      default: () => {
        return [];
      },
    },
  },
  setup(props) {
    const totalPrice = computed(() => {
      return props.items.reduce(function (sum, item) {
        return sum + item.price * item.quantity;
      }, 0);
    });

    return {
      totalPrice,
    };
  },
};
</script>
