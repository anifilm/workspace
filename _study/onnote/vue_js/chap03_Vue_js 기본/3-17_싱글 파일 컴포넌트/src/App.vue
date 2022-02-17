<template>
  <div id="app">
    <ul>
      <li v-for="(item, index) in items" v-bind:key="item.name">
        <!-- v-on 디렉트브를 통한 이벤트 수신 -->
        <!-- v-on:[하위에서 전달되는 이벤트명]="상위에서 연결할 이벤트 메서드명" -->
        <item-input
          v-bind:item-name="item.name"
          v-bind:item-price="item.price"
          v-bind:item-index="index"
          v-on:change-price="onChangePrice"
        ></item-input>
      </li>
    </ul>
    <hr />
    <item-list v-bind:items="items"></item-list>
  </div>
</template>

<script>
import ItemInput from '@/components/ItemInput';
import ItemList from '@/components/ItemList';

const items = [
  {
    name: 'CPU',
    price: 462984,
    quantity: 1
  },
  {
    name: '메인보드',
    price: 112053,
    quantity: 1
  },
  {
    name: '메모리',
    price: 112053,
    quantity: 2
  }
];

export default {
  name: 'App',
  data() {
    return {
      items: items
    };
  },
  components: {
    ItemInput,
    ItemList
  },
  methods: {
    // 하위에서 전달된 change-price 이벤트의 처리 메서드
    onChangePrice(newPrice, index) {
      console.log('onChangePrice newPrice:', newPrice);
      console.log('onChangePrice index:', index);
      this.items[index].price = newPrice;
    }
  }
};
</script>

<style scoped>
@import './css/style.css';
</style>
