<template>
  <div>
    <ul>
      <li v-for="(todoItem, index) in todoItems" v-bind:key="index">
        <input type="checkbox" />
        <span>{{ todoItem }}</span>
        <button v-on:click="removeTodo(todoItem, index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  data() {
    return {
      todoItems: ['todoItem1', 'todoItem2', 'todoItem3'],
    };
  },
  methods: {
    removeTodo(todoItem, index) {
      console.log('removeTodo');
      this.todoItems.splice(index, 1);
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
