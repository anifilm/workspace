<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todo.done"
          v-on:change="checkTodo(todo.id)"
        />
        <span
          v-if="!isEditing(index)"
          v-on:dblclick="handleDblClick(todo.id)"
        >{{ todo.text }}</span>
        <input
          v-else
          type="text"
          ref="content"
          v-bind:value="todo.text"
          v-on:blur="handleBlur()"
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
  @Prop() editingId!: number;

  checkTodo(id: number) {
    //console.log('checkTodo', id);
    this.$emit('checkTodo', id);
  }
  isEditing(index: number) {
    if (this.todos[index]) {
      return this.todos[index].id === this.editingId;
    }
    return false;
  }
  updateTodo(id: number, e: Event) {
    const content = (e.target as HTMLInputElement).value.trim();
    if (content.length <= 0) return false;
    //console.log('updateTodo', id, content);
    this.$emit('updateTodo', id, content);
    (this.$refs.content as HTMLInputElement[])[0].blur();
  }
  removeTodo(index: number) {
    //console.log('removeTodo', index);
    this.$emit('removeTodo', index);
  }
  handleDblClick(id: number) {
    this.$emit('setEditingId', id)
    this.$nextTick(() => {
      (this.$refs.content as HTMLInputElement[])[0].focus();
    })
  }
  handleBlur() {
    this.$emit('resetEditingId');
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
