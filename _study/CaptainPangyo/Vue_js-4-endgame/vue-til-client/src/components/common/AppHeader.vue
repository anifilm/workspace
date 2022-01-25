<template>
  <div>
    <div>AppHeader</div>
    <Demo />
  </div>
</template>

<script>
import Demo from '@/demo/basic/Demo.vue';

export default {
  components: {
    Demo
  },
  created() {
    console.log('AppHeader');
  }
};
</script>

<style></style>
