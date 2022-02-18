<template>
  <h2>Vue Provide / Inject</h2>
  <item-main></item-main>
</template>

<script>
import { ref, provide } from 'vue'; // provide 함수 임포트
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
    // 공유할 데이터 정의 (provide 상위 컴포넌트가 하위 컴포넌트들과 데이터 공유시 정의)
    provide('items', items);
  },
};
</script>
