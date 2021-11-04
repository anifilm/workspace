<template>
  <v-container>
      <v-card
        class="mx-auto my-4"
        max-width="600"
        v-for="(todoItem, index) in todoItems" v-bind:key="index"
      >
        <v-list-item>
          <v-list-item-content>{{ todoItem }}</v-list-item-content>
          <v-btn color="primary" small outlined>수정</v-btn>&nbsp;
          <v-btn color="error" small outlined v-on:click="removeTodo(todoItem, index)">삭제</v-btn>
        </v-list-item>
      </v-card>
  </v-container>
</template>

<script>
export default {
  data() {
    return {
      todoItems: [
        'todoItem1',
        'todoItem2',
        'todoItem3'
      ]
    }
  },
  methods: {
    // 해당 Todo 항목 삭제
    removeTodo(todoItem, index) {
      console.log('removeTodo:', todoItem, index);
      this.todoItems.splice(index, 1);
    }
  }
}
</script>
