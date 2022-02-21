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
import store from './store';

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
    return store.state.todos;
  }

  addTodo(todo: string) {
    store.dispatch('addTodo', todo);
  }
  checkTodo(id: number) {
    store.dispatch('checkTodo', id);
  }
  removeTodo(index: number) {
    store.dispatch('removeTodo', index);
  }
  clearAll() {
    store.dispatch('clearAll');
  }
}
</script>
