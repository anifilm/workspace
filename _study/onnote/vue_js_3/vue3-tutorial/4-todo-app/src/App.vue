<template>
  <div id="app">
    <TodoHeader />
    <TodoInput v-on:add-todo="addTodo" />
    <TodoList
      v-bind:todos="todos"
      v-on:check-todo="checkTodo"
      v-on:remove-todo="removeTodo"
    />
    <TodoFooter v-on:clear-all="clearAll" />
  </div>
</template>

<script>
import { ref } from 'vue';

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

    const addTodo = (todo) => {
      const newTodo = {
        id: new Date().getTime(), // 날짜를 사용한 숫자 생성
        text: todo,
        done: false,
      };
      todos.value.push(newTodo);
    };
    const checkTodo = (id) => {
      todos.value.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo,
      );
    };
    const removeTodo = (index) => {
      todos.value.splice(index, 1);
    };
    const clearAll = () => {
      // 완료된 항목만 삭제하도록 수정
      todos.value = todos.value.filter((todo) => !todo.done);
    };

    return {
      todos,
      addTodo,
      checkTodo,
      removeTodo,
      clearAll,
    };
  },
};
</script>
