<template>
  <div>
    <h3>게시판 수정 폼</h3>
    <button type="submit">수정</button>
    <router-link
      :to="{ name: 'BoardReadPage', params: { boardNo: 100 } }"
    >취소</router-link>
  </div>
</template>

<script>
export default {
  name: 'BoardModifyForm',
};
</script>
