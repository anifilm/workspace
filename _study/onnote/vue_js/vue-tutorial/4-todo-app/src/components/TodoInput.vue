<template>
  <v-container>
    <v-row class="mt-5">
      <v-col cols="7" offset="2">
        <v-text-field
          label="할 일을 입력하세요."
          solo
          clearable
          v-model="newTodoItem"
          v-on:keyup.enter="addTodo"
        ></v-text-field>
      </v-col>
      <v-col cols="2">
        <v-btn large class="primary mt-1" v-on:click="addTodo">추가</v-btn>
      </v-col>
    </v-row>
  </v-container>
</template>

<script>
export default {
  data() {
    return {
      newTodoItem: ''
    }
  },
  methods: {
    // Todo 항목 추가
    addTodo() {
      if (this.newTodoItem.trim() !== '') {
        const value = this.newTodoItem && this.newTodoItem.trim();
        console.log('addTodo:', value);
      }
      this.clearInput();
    },
    // Todo 항목을 추가한 후 입력된 텍스트를 지운다.
    clearInput() {
      this.newTodoItem = '';
    }
  }
}
</script>
