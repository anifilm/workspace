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

export interface Todo {
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
  todos: Todo[] = [
    {
      id: 1,
      text: 'todoItem1',
      done: true,
    },
    {
      id: 2,
      text: 'todoItem2',
      done: false,
    },
    {
      id: 3,
      text: 'todoItem3',
      done: false,
    },
  ];

  addTodo(todo: string) {
    const newTodo: Todo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: todo,
      done: false,
    };
    this.todos.push(newTodo);
  }
  checkTodo(id: number) {
    this.todos = this.todos.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  }
  removeTodo(index: number) {
    this.todos.splice(index, 1);
  }
  clearAll() {
    // 완료된 항목만 삭제하도록 수정
    this.todos = this.todos.filter((todo) => !todo.done);
  }
}
</script>
