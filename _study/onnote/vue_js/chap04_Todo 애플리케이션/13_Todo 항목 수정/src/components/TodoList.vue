<template>
  <div>
    <ul>
      <li v-for="(todoItem, index) in todoItems" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todoItem.done"
          v-on:change="checkTodo(todoItem.id)"
        />
        <span
          v-if="!todoItem.content.isEditing"
          v-on:dblclick="handleDblClick(index)"
        >{{ todoItem.content.text }}</span>
        <input
          v-else
          type="text"
          ref="content"
          v-bind:value="todoItem.content.text"
          v-on:blur="handleBlur(index)"
          v-on:keydown.enter="updateTodo(todoItem.id, $event)"
        />
        <button
          v-show="!todoItem.isEditing"
          v-on:click="removeTodo(index)"
        >삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  props: ['todoItems'],
  methods: {
    checkTodo(id) {
      console.log('checkTodo');
      this.$emit('checkTodo', id);
    },
    updateTodo(id, e) {
      console.log('update Todo');
      const content = e.target.value.trim();
      if (content.length <= 0) return false;
      this.$emit('updateTodo', id, content);
      this.$refs.content[0].blur();
    },
    removeTodo(index) {
      console.log('removeTodo');
      this.$emit('removeTodo', index);
    },
    handleDblClick(index) {
      //this.$emit('editTodo', index);
      todos[index].content.isEditing = true;
      this.$nextTick(() => {
        this.$refs.content[0].focus();
      });
    },
    handleBlur(index) {
      //this.$emit('editTodo', index);
      todos[index].content.isEditing = false;
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
