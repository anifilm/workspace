<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:addTodo="addTodo" />
    <TodoList
      v-bind:todoItems="todoItems"
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
    addTodo(todoItem) {
      const todo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todoItem,
        done: false,
      };
      this.todoItems.push(todo);
    },
    checkTodo(id) {
      this.todoItems.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    },
    removeTodo(id) {
      this.todoItems = this.todoItems.filter((todo) => todo.id !== id);
    },
    clearAll() {
      // 완료된 항목만 삭제하도록 수정
      this.todoItems = this.todoItems.filter((todo) => !todo.done);
    },
  },
};
</script>
