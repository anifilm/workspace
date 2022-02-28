<template>
  <div align="center">
    <h2>게시글 등록</h2>
    <board-register-form />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import BoardRegisterForm from '../components/BoardRegisterForm.vue';

@Component({
  components: {
    BoardRegisterForm,
  },
})
export default class BoardRegisterPage extends Vue {

}
</script>
