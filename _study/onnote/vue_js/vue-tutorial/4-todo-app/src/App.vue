<template>
  <v-app>
    <v-app-bar app color="primary" dark>
      <v-app-bar-nav-icon></v-app-bar-nav-icon>
      <TodoHeader />
    </v-app-bar>

    <v-main>
      <TodoInput />
      <TodoList />
    </v-main>

    <v-footer app>
      <TodoFooter />
    </v-footer>
  </v-app>
</template>

<script>
import TodoHeader from '@/components/TodoHeader';
import TodoInput from '@/components/TodoInput';
import TodoList from '@/components/TodoList';
import TodoFooter from '@/components/TodoFooter';

export default {
  name: 'App',
  components: {
    TodoHeader,
    TodoInput,
    TodoList,
    TodoFooter
  }
};
</script>
