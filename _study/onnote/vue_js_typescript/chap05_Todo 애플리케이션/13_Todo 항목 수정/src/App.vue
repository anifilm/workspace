<template>
  <div>
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:checkTodo="onCheckTodo"
      v-on:updateTodo="onUpdateTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';
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
