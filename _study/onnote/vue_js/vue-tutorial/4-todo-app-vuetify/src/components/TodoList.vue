<template>
  <v-container>
    <v-card
      class="mx-auto my-4"
      max-width="600"
      v-for="(todo, index) in todos"
      v-bind:key="index"
    >
      <v-list-item>
        <v-checkbox v-bind:checked="todo.done"></v-checkbox>
        <v-list-item-content>{{ todo.text }}</v-list-item-content>
        <v-btn color="primary" small outlined>수정</v-btn>&nbsp;
        <v-btn
          color="error"
          small
          outlined
          v-on:click="removeTodo(index)"
        >
          삭제
        </v-btn>
      </v-list-item>
    </v-card>
  </v-container>
</template>

<script>
export default {
  props: ['todos'],
  methods: {
    // 해당 Todo 항목 삭제
    removeTodo(index) {
      //console.log('removeTodo:', index);
      // Todo 항목값과 Todo 항목 인덱스를 인자 값으로 추가하여 이벤트 전달
      this.$emit('removeTodo', index);
    },
  },
};
</script>
