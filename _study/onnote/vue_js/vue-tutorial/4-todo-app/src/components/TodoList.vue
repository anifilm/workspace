<template>
  <div>
    <ul>
      <li v-for="todoItem in todoItems" v-bind:key="index">
        <input
          type="checkbox"
          v-bind:checked="todoItem.done"
          v-on:change="checkTodo(todoItem.id)"
        />
        <span>{{ todoItem.text }}</span>
        <button v-on:click="removeTodo(index)">삭제</button>
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
    removeTodo(index) {
      console.log('removeTodo');
      this.$emit('removeTodo', index);
    },
  },
};
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
