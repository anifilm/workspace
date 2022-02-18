<template>
  <h2>Vue 이벤트 전달 (컴포지션 API 방식)</h2>
  <item-main></item-main>
</template>

<script>
import { ref, provide } from 'vue';
import ItemMain from './components/ItemMain.vue';

export default {
  name: 'App',
  components: {
    ItemMain,
  },
  setup() {
    const items = ref([
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
    ]);

    provide('items', items);
  },
};
</script>
