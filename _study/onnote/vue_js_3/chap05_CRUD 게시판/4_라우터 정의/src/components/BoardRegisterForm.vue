<template>
  <div>
    <h3>게시글 등록 폼</h3>
    <button type="submit">등록</button>
    <router-link :to="{ name: 'BoardListPage' }">취소</router-link>
  </div>
</template>

<script>
export default {
  name: 'BoardRegisterForm',
};
</script>
