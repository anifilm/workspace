<template>
  <div>
    <input
      type="radio"
      v-bind:checked="filter === 'ALL'"
      v-on:change="setFilter('ALL')"
    />전체
    <input
      type="radio"
      v-bind:checked="filter === 'NOTDONE'"
      v-on:change="setFilter('NOTDONE')"
    />미완료
    <input
      type="radio"
      v-bind:checked="filter === 'DONE'"
      v-on:change="setFilter('DONE')"
    />완료
  </div>
</template>

<script>
import { inject } from 'vue';

export default {
  name: 'TodoFilter',
  emits: ['set-filter'],
  setup(props, context) {
    const filter = inject('filter'); // 공급된 데이터 가져오기

    const setFilter = (filter) => {
      context.emit('set-filter', filter);
    };

    return {
      filter,
      setFilter,
    };
  },
};
</script>
