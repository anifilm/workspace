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

<script>
export default {
  props: ['todos'],
  methods: {
    checkTodo(id) {
      //console.log('checkTodo');
      this.$emit('checkTodo', id);
    },
    updateTodo(id, e) {
      const content = e.target.value.trim();
      if (content.length <= 0) return false;
      //console.log('updateTodo', id, content);
      this.$emit('updateTodo', id, content);
      this.$refs.content[0].blur();
    },
    removeTodo(index) {
      //console.log('removeTodo', index);
      this.$emit('removeTodo', index);
    },
    handleDblClick(index) {
      this.todos[index].isEditing = true;
      this.$nextTick(() => {
        this.$refs.content[0].focus();
      });
    },
    handleBlur(index) {
      this.todos[index].isEditing = false;
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
