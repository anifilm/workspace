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

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Mutation } from 'vuex-class';
import { SET_FILTER } from '../store/mutation-types';

@Component
export default class TodoFilter extends Vue {
  // 필터링 유형 데이터 맵핑
  @State filter!: string;

  // 필터링 유형을 변경하는 메서드
  @Mutation(SET_FILTER) readonly setFilter: any;
}
</script>
