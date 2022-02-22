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
import { computed } from 'vue';
import { useStore } from 'vuex';

export default {
  name: 'TodoFilter',
  setup() {
    const store = useStore();

    // 필터링 유형 데이터 computed 속성 맵핑
    const filter = computed(() => store.state.filter);

    // 필터링 유형 설정 메서드
    const setFilter = (filter) => {
      store.dispatch('setFilter', filter);
    };

    return {
      filter,
      setFilter,
    };
  },
};
</script>
