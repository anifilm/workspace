<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:checkTodo="checkTodo"
      v-on:removeTodo="removeTodo"
    />
    <TodoFooter v-on:clearAll="clearAll" />
  </div>
</template>

<script>
import TodoHeader from './components/TodoHeader.vue';
import TodoInput from './components/TodoInput.vue';
import TodoList from './components/TodoList.vue';
import TodoFooter from './components/TodoFooter.vue';

export default {
  name: 'App',
  components: {
    TodoHeader,
    TodoInput,
    TodoList,
    TodoFooter,
  },
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
  methods: {
    addTodo(todo) {
      const todo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
      };
      this.todos.push(todo);
    },
    checkTodo(id) {
      this.todos = this.todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    removeTodo(index) {
      this.todos.splice(index, 1);;
    },
    clearAll() {
      // 완료된 항목만 삭제하도록 수정
      this.todos = this.todos.filter((todo) => !todo.done);
    },
  },
};
</script>
