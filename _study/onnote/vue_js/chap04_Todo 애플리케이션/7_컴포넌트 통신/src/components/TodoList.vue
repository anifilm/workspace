<template>
  <div>
    <ul>
      <li v-for="(todoItem, index) in todoItems" v-bind:key="index">
        <input type="checkbox" v-model="todoItem.done" />
        <span>{{ todoItem.text }}</span>
        <button v-on:click="removeTodo(todoItem, index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  props: ['todoItems'],
  methods: {
    removeTodo(todoItem, index) {
      //console.log('removeTodo');
      this.$emit('removeTodo', todoItem, index);
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
