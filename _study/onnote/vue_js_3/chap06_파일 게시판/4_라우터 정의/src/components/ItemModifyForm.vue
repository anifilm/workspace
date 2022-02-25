<template>
  <div>
    <h3>게시글 수정 폼</h3>
    <button type="submit">수정</button>
    <router-link
      :to="{ name: 'ItemReadPage', params: { itemNo: 100 } }"
    >취소</router-link>
  </div>
</template>

<script>
export default {
  name: 'ItemModifyForm',
};
</script>
