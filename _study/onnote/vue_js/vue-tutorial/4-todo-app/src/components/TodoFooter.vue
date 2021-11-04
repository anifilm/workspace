<template>
  <v-container>
    <v-row>
      <v-col cols="2" offset="9">
        <v-btn color="error" relative top right v-on:click="clearTodo">완료 항목 삭제</v-btn>
      </v-col>
    </v-row>
  </v-container>
</template>

<script>
export default {
  methods: {
    // 모든 완료된 Todo 항목을 삭제
    clearTodo() {
      console.log('clearTodo');
    }
  }
}
</script>
