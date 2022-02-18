<template>
  <h3>게시판 등록 폼</h3>
  <table>
    <tr>
      <td>제목</td>
      <td><input type="text"></td>
    </tr>
    <tr>
      <td>작성자</td>
      <td><input type="text"></td>
    </tr>
    <tr>
      <td>내용</td>
      <td><textarea name="content" id="content" cols="23" rows="5"></textarea></td>
    </tr>
  </table>
  <div>
    <button>등록</button>
    <button>취소</button>
  </div>
</template>

<script>
export default {
  // 컴포넌트 이름
  name: 'BoardRegisterForm',
};
</script>
