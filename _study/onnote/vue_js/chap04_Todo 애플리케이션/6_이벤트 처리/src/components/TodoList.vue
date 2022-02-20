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
  data() {
    return {
      todoItems: [
        {
          id: 1,
          text: 'todoItem1',
          done: true,
        },
        {
          id: 2,
          text: 'todoItem2',
          done: false,
        },
        {
          id: 3,
          text: 'todoItem3',
          done: false,
        },
      ],
    };
  },
  methods: {
    checkTodo(id) {
      console.log('checkTodo');
      todos.value.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    removeTodo(index) {
      console.log('removeTodo');
      todos.value.splice(index, 1);
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
