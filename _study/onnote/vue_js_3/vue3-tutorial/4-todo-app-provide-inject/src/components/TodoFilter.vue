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
export default {
  name: 'TodoFilter',
  props: ['filter'],
  emits: ['set-filter'],
  setup(props, context) {
    const setFilter = (filter) => {
      context.emit('set-filter', filter);
    };

    return {
      setFilter,
    };
  },
};
</script>
