<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todo.done"
          v-on:change="checkTodo(todo.id)"
        />
        <span>{{ todo.text }}</span>
        <button v-on:click="removeTodo(index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';

interface Todos {
  id: number;
  text: string;
  done: boolean;
}

@Component
export default class TodoList extends Vue {
  @Prop() todos!: Todos[]; // props 속성

  checkTodo(id) {
    console.log('checkTodo');
    this.$emit('checkTodo', id);
  }
  removeTodo(index: number) {
    console.log('removeTodo');
    //this.todos.splice(index, 1);
    this.$emit('removeTodo', index);
  }
}
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span {
  margin: 10px;
}
ul {
  list-style: none;
  padding-left: 0px;
}
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
