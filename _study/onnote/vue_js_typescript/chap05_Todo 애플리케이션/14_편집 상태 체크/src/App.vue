<template>
  <div>
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todos="todos"
      v-bind:editingId="editingId"
      v-on:checkTodo="onCheckTodo"
      v-on:setEditingId="setEditingId"
      v-on:resetEditingId="resetEditingId"
      v-on:updateTodo="onUpdateTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Action, Mutation } from 'vuex-class';
import { SET_EDITING_ID, RESET_EDITING_ID } from './store/mutation-types';
import { Todo } from './store';

import TodoHeader from './components/TodoHeader.vue';
import TodoInput from './components/TodoInput.vue';
import TodoList from './components/TodoList.vue';
import TodoFooter from './components/TodoFooter.vue';

@Component({
  components: {
    TodoHeader,
    TodoInput,
    TodoList,
    TodoFooter,
  },
})
export default class App extends Vue {
  // 스토어 상태 맵핑
  @State readonly todos!: Todo[];
  @State readonly editingId!: number;
  // 스토어 뮤테이션 맵핑
  @Mutation(SET_EDITING_ID) readonly setEditingId: any;
  @Mutation(RESET_EDITING_ID) readonly resetEditingId: any;
  // 스토어 액션 맵핑
  @Action readonly addTodo: any;
  @Action readonly checkTodo: any;
  @Action readonly updateTodo: any;
  @Action readonly removeTodo: any;
  @Action readonly clearAll: any;
  @Action readonly save: any;
  @Action readonly restore: any;

  onAddTodo(todo: string) {
    this.addTodo(todo);
    this.save();
  }
  onCheckTodo(id: number) {
    this.checkTodo(id);
    this.save();
  }
  onUpdateTodo(id: number, content: string) {
    this.updateTodo({ id, content });
    this.save();
  }
  onRemoveTodo(index: number) {
    this.removeTodo(index);
    this.save();
  }
  onClearAll() {
    this.clearAll();
    this.save();
  }

  created() {
    this.restore();
  }
}
</script>
