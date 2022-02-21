<template>
  <div>
    <ul>
      <li v-for="todo in todos" v-bind:key="index">
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

<script>
export default {
  props: ['todos'],
  methods: {
    checkTodo(id) {
      //console.log('checkTodo');
      this.$emit('checkTodo', id);
    },
    removeTodo(index) {
      //console.log('removeTodo');
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
