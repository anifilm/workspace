<template>
  <v-container>
    <v-row class="mt-5">
      <v-col cols="9" offset="1">
        <v-text-field
          label="할 일을 입력하세요."
          outlined
          clearable
          v-model="newTodoItem"
        ></v-text-field>
      </v-col>
      <v-col cols="2">
        <v-btn class="primary">추가</v-btn>
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
  }
}
</script>
