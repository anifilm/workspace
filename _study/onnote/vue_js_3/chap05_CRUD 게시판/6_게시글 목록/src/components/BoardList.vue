<template>
  <div>
    <table>
      <tr>
        <th align="center" width="80">번호</th>
        <th align="center" width="320">제목</th>
        <th align="center" width="100">작성자</th>
        <th align="center" width="180">등록일시</th>
      </tr>
      <tr v-if="!boards || (Array.isArray(boards) && boards.length === 0)">
        <td colspan="4">List is empty.</td>
      </tr>
      <tr v-else v-for="board in boards" :key="board.boardNo">
        <td align="center">{{ board.boardNo }}</td>
        <td align="left">
          <router-link
            :to="{ name: 'BoardReadPage', params: { boardNo: board.boardNo.toString() } }"
          >{{ board.title }}</router-link>
        </td>
        <td align="center">{{ board.writer }}</td>
        <td align="center">{{ board.regDate }}</td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'BoardList',
  props: {
    boards: {
      type: Array,
    },
  },
};
</script>

<style scoped>
table {
  border-top: 1px solid lightgray;
  border-collapse: collapse;
}
th, td {
  border-bottom: 1px solid lightgray;
  padding: 10px;
}
</style>
