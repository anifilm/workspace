<template>
  <div>
    <TodoHeader />
    <TodoInput v-on:addTodo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:checkTodo="checkTodo"
      v-on:removeTodo="removeTodo"
    />
    <TodoFooter v-on:clearAll="clearAll" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

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
  // 스토어 상태 접근
  get todos() {
    return this.$store.state.todos;
  }

  addTodo(todo: string) {
    this.$store.dispatch('addTodo', todo);
  }
  checkTodo(id: number) {
    this.$store.dispatch('checkTodo', id);
  }
  removeTodo(index: number) {
    this.$store.dispatch('removeTodo', index);
  }
  clearAll() {
    this.$store.dispatch('clearAll');
  }
}
</script>
