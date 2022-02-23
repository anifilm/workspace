<template>
  <div>
    <h3>게시글 목록 뷰</h3>
    <router-link
      :to="{ name: 'BoardReadPage', params: { boardNo: 100 } }"
    >게시글 상세보기</router-link>
  </div>
</template>

<script>
export default {
  name: 'BoardList',
};
</script>
