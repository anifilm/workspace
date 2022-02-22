<template>
  <div>
    <input
      type="radio"
      v-bind:checked="filter === 'ALL'"
      v-on:change="SET_FILTER('ALL')"
    />전체
    <input
      type="radio"
      v-bind:checked="filter === 'NOTDONE'"
      v-on:change="SET_FILTER('NOTDONE')"
    />미완료
    <input
      type="radio"
      v-bind:checked="filter === 'DONE'"
      v-on:change="SET_FILTER('DONE')"
    />완료
  </div>
</template>

<script>
import { mapState, mapMutations } from 'vuex';
import { SET_FILTER } from '../store/mutation-types';

export default {
  computed: {
    ...mapState(['filter']),
  },
  methods: {
    ...mapMutations([SET_FILTER])
  }
};
</script>
