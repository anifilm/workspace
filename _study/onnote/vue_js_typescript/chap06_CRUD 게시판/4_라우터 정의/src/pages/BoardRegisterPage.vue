<template>
  <div align="center">
    <h3>게시판 등록</h3>
    <board-register-form />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import BoardRegisterForm from '../components/BoardRegisterForm.vue';

@Component({
  components: {
    BoardRegisterForm,
  }
})
export default class BoardRegisterPage extends Vue {

};
</script>
