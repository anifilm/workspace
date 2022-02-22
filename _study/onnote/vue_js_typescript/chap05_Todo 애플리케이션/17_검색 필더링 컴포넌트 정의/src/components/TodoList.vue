<template>
  <div>
    <ul>
      <TodoItem v-for="todo in todos"
        v-bind:key="todo.id"
        v-bind:todo="todo"
        v-bind:editingId="editingId"
        v-on:checkTodo="onCheckTodo"
        v-on:setEditingId="setEditingId"
        v-on:resetEditingId="resetEditingId"
        v-on:updateTodo="onUpdateTodo"
        v-on:removeTodo="onRemoveTodo"
      />
    </ul>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { State, Mutation, Getter } from 'vuex-class';
import { SET_EDITING_ID, RESET_EDITING_ID } from '../store/mutation-types';
//import { Todo } from '../store';

import TodoItem from './TodoItem.vue';

@Component({
  components: {
    TodoItem,
  },
})
export default class TodoList extends Vue {
  // 스토어 상태 맵핑
  //@State todos!: Todo[];
  @State editingId!: number;
  // 스토어 뮤테이션 맵핑
  @Mutation(SET_EDITING_ID) readonly setEditingId: any;
  @Mutation(RESET_EDITING_ID) readonly resetEditingId: any;
  // 스토어 게터 맵핑
  @Getter readonly filteredTodos: any;

  // 검색된 Todo 항목 목록
  get todos() {
    return this.filteredTodos;
  }

  onCheckTodo(id: number) {
    this.$emit('checkTodo', id);
  }
  onUpdateTodo(id: number, content: string) {
    this.$emit('updateTodo', id, content);
  }
  onRemoveTodo(id: number) {
    this.$emit('removeTodo', id);
  }
}
</script>

<style scoped>
div {
  background-color: LightCyan;
}
ul {
  list-style: none;
  padding-left: 0px;
}
</style>
