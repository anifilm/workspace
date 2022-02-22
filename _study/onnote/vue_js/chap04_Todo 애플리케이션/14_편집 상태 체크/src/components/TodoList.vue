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

<script>
export default {
  props: ['todos', 'editingId'],
  methods: {
    checkTodo(id) {
      //console.log('checkTodo');
      this.$emit('checkTodo', id);
    },
    isEditing(id) {
      if (id === this.editingId) {
        return true;
      }
      return false;
    },
    updateTodo(id, e) {
      //console.log('update Todo');
      const content = e.target.value.trim();
      if (content.length <= 0) return false;
      this.$emit('updateTodo', id, content);
      this.$refs.content[0].blur();
    },
    removeTodo(index) {
      //console.log('removeTodo');
      this.$emit('removeTodo', index);
    },
    handleDblClick(id) {
      this.$emit('setEditingId', id);
      this.$nextTick(() => {
        this.$refs.content[0].focus();
      });
    },
    handleBlur() {
      this.$emit('resetEditingId');
    },
  },
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span,
input {
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
