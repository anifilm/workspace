<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
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
import { ref } from 'vue';

export default {
  name: 'TodoList',
  setup() {
    const todos = ref([
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
    ]);

    const checkTodo = (id) => {
      console.log('checkTodo');
      todos.value.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    };
    const removeTodo = (index) => {
      console.log('removeTodo');
      todos.value.splice(index, 1);
    };

    return {
      todos,
      checkTodo,
      removeTodo,
    };
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
