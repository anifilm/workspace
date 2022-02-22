<template>
  <div>
    <li>
      <input
        type="checkbox"
        v-bind:checked="todo.done"
        v-on:change="checkTodo"
      />
      <span v-if="!isEditing" v-on:dblclick="handleDblClick">
        {{ todo.text }}
      </span>
      <input
        v-else
        type="text"
        ref="content"
        v-bind:value="todo.text"
        v-on:blur="handleBlur"
        v-on:keydown.enter="updateTodo"
      />
      <button v-on:click="removeTodo">삭제</button>
    </li>
  </div>
</template>

<script lang="ts">
import { Component, Vue, Prop } from 'vue-property-decorator';
import { Todo } from '../store';

@Component
export default class TodoItem extends Vue {
  // props 속성
  @Prop() todo!: Todo;
  @Prop() editingId!: number;

  // computed 속성
  get isEditing() {
    return this.todo.id === this.editingId;
  }

  // 컴포넌트 메서드 정의
  checkTodo() {
    const id = this.todo.id;
    //console.log('checkTodo', id);
    this.$emit('checkTodo', id);
  }
  updateTodo(e: Event) {
    const id = this.todo.id;
    const content = (e.target as HTMLInputElement).value.trim();
    if (content.length <= 0) return false;
    //console.log('updateTodo', id, content);
    this.$emit('updateTodo', id, content);
    (this.$refs.content as HTMLInputElement).blur();
  }
  removeTodo() {
    const id = this.todo.id;
    //console.log('removeTodo', id);
    this.$emit('removeTodo', id);
  }
  handleDblClick() {
    const id = this.todo.id;
    this.$emit('setEditingId', id)
    this.$nextTick(() => {
      (this.$refs.content as HTMLInputElement).focus();
    })
  }
  handleBlur() {
    this.$emit('resetEditingId');
  }
}
</script>

<style scoped>
span, input {
  margin: 10px;
}
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
