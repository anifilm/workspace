<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todo.done"
          v-on:change="checkTodo(todo.id)"
        />
        <span>{{ todo.isEditing }}</span>
        <span
          v-if="!todo.isEditing"
          v-on:dblclick="handleDblClick(index)"
        >{{ todo.text }}</span>
        <input
          v-else
          type="text"
          ref="content"
          v-bind:value="todo.text"
          v-on:blur="handleBlur(index)"
          v-on:keydown.enter="updateTodo(todo.id, $event)"
        />
        <button v-on:click="removeTodo(index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { Todo } from '../store';

@Component
export default class TodoList extends Vue {
  @Prop() todos!: Todo[]; // props 속성

  checkTodo(id: number) {
    console.log('checkTodo', id);
    this.$emit('checkTodo', id);
  }
  updateTodo(id: number, e: Event) {
    const content = (e.target as HTMLInputElement).value.trim();
    if (content.length <= 0) return false;
    console.log('updateTodo', id, content);
    this.$emit('updateTodo', id, content);
    (this.$refs.content as HTMLInputElement[])[0].blur();
  }
  removeTodo(index: number) {
    console.log('removeTodo', index);
    this.$emit('removeTodo', index);
  }
  handleDblClick(index: number) {
    this.todos[index].isEditing = true;
    this.$nextTick(() => {
      (this.$refs.content as HTMLInputElement[])[0].focus();
    })
  }
  handleBlur(index: number) {
    this.todos[index].isEditing = false;
  }
}
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span, input {
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
