<template>
  <ul>
    <li v-for="item in items" v-bind:key="item.name">
      {{ item.name }}의 가격:
      <input type="text" v-on:input="item.price = $event.target.value" v-bind:value="item.price" />
    </li>
  </ul>
  <hr />
  <item-list v-bind:items="items"></item-list>
</template>

<script>
import ItemList from './ItemList.vue';

export default {
  name: 'ItemMain',
  components: {
    ItemList,
  },
  // props 속성 정의
  props: {
    items: {
      type: Object,
      default: () => {
        return [];
      },
    },
  },
};
</script>
