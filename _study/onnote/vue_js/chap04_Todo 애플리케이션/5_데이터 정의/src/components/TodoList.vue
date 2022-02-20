<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <input type="checkbox" />
        <span>{{ todo.text }}</span>
        <button>삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  data() {
    return {
      todos: [
        {
          id: 1,
          text: 'todo1',
          done: true,
        },
        {
          id: 2,
          text: 'todo2',
          done: false,
        },
        {
          id: 3,
          text: 'todo3',
          done: false,
        },
      ],
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
