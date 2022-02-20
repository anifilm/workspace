<template>
  <div>
    <ul>
      <li v-for="todo in todos" v-bind:key="todo.id">
        <input
          type="checkbox"
          v-model="todo.done"
          v-on:click="checkTodo(todo.id)"
        />
        <span>{{ todo.text }}</span>
        <button v-on:click="removeTodo(todo.id)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  name: 'TodoList',
  props: ['todos'],
  emits: ['check-todo', 'remove-todo'],
  setup(props, context) {
     const checkTodo = (id) => {
      console.log('checkTodo');
      context.emit('check-todo', id);
    };
    const removeTodo = (id) => {
      console.log('removeTodo');
      context.emit('remove-todo', id);
    };

    return {
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
