<template>
  <h2>Vue props 속성 (컴포지션 API 방식)</h2>
  <!-- v-bind 속성(props)을 통해 하위 컴포넌트로 데이터를 보낸다. -->
  <!-- v-bind:[하위 props data 속성 이름]="[상위 data 속성 이름]" -->
  <item-main v-bind:items="items"></item-main>
</template>

<script>
import { ref } from 'vue';
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

    return {
      items,
    };
  },
};
</script>
