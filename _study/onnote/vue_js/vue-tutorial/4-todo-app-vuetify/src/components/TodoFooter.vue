<template>
  <v-container>
    <v-row justify="center">
      <v-spacer></v-spacer>
      <v-col cols="3">
        <v-btn color="error" v-on:click="clearAll">완료 항목 삭제</v-btn>
      </v-col>
    </v-row>
  </v-container>
</template>

<script>
export default {
  methods: {
    // 모든 완료된 Todo 항목을 삭제
    clearAll() {
      //console.log('clearAll');
      this.$emit('clearAll');
    },
  },
};
</script>
