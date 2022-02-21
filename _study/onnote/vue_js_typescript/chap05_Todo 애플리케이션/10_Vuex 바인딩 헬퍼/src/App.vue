<template>
  <div>
    <TodoHeader />
    <TodoInput v-on:addTodo="onAddTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:checkTodo="onCheckTodo"
      v-on:removeTodo="onRemoveTodo"
    />
    <TodoFooter v-on:clearAll="onClearAll" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { State, Action } from 'vuex-class';

import TodoHeader from './components/TodoHeader.vue';
import TodoInput from './components/TodoInput.vue';
import TodoList from './components/TodoList.vue';
import TodoFooter from './components/TodoFooter.vue';

interface Todos {
  id: number;
  text: string;
  done: boolean;
}

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
  @State readonly todos!: Todos[];
  // 스토어 액션 맵핑
  @Action readonly addTodo: any;
  @Action readonly checkTodo: any;
  @Action readonly removeTodo: any;
  @Action readonly clearAll: any;

  onAddTodo(todo: string) {
    this.addTodo(todo);
  }
  onCheckTodo(id: number) {
    this.checkTodo(id);
  }
  onRemoveTodo(index: number) {
    this.removeTodo(index);
  }
  onClearAll() {
    this.clearAll();
  }
}
</script>
