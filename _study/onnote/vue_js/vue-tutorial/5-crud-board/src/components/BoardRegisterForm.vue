<template>
  <div>
    <h3>게시판 등록 폼</h3>
    <button type="submit">등록</button>
    <router-link
      :to="{ name: 'BoardReadPage', params: { boardNo: 100 } }"
    >취소</router-link>
  </div>
</template>

<script>
export default {
  name: 'BoardRegisterForm',
};
</script>
