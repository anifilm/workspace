<template>
  <v-container>
    <v-card
      class="mx-auto my-4"
      max-width="600"
      v-for="(todoItem, index) in todoItems"
      v-bind:key="index"
    >
      <v-list-item>
        <v-list-item-content>{{ todoItem }}</v-list-item-content>
        <v-btn color="primary" small outlined>수정</v-btn>&nbsp;
        <v-btn
          color="error"
          small
          outlined
          v-on:click="removeTodo(todoItem, index)"
        >
          삭제
        </v-btn>
      </v-list-item>
    </v-card>
  </v-container>
</template>

<script>
export default {
  props: ['todoItems'],
  methods: {
    // 해당 Todo 항목 삭제
    removeTodo(todoItem, index) {
      //console.log('removeTodo:', todoItem, index);
      //this.todoItems.splice(index, 1);
      // Todo 항목값과 Todo 항목 인덱스를 인자 값으로 추가하여 이벤트 전달
      this.$emit('removeTodo', todoItem, index);
    },
  },
};
</script>
