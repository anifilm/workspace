<template>
  <div>
    <ul>
      <li v-for="todoItem in todoItems" v-bind:key="todoItem.id">
        <input
          type="checkbox"
          v-model="todoItem.done"
          v-on:click="checkTodo(todoItem.id)"
        />
        <span>{{ todoItem.text }}</span>
        <button v-on:click="removeTodo(todoItem.id)">삭제</button>
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
    removeTodo(id) {
      console.log('removeTodo');
      todos.value = todos.value.filter((todo) => todo.id !== id);
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
