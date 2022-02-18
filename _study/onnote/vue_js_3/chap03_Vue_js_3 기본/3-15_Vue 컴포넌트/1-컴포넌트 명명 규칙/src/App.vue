<template>
  <h2>Vue 컴포넌트 (컴포넌트 명명 규칙)</h2>
  <!-- 파스칼 케이스를 사용하여 컴포넌트 등록 -->
  <BoardRegisterForm />
  <!-- 케밥 케이스를 사용하여 컴포넌트 등록 -->
  <board-register-form />
</template>

<script>
// 지역 컴포넌트 임포트
import BoardRegisterForm from './components/BoardRegisterForm.vue';

export default {
  name: 'App',
  // 지역 컴포넌트 등록
  components: {
    BoardRegisterForm,
  },
};
</script>
