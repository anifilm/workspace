<template>
  <div class="name">{{ name }}</div>
  <button class="btn btn-primary" v-on:click="updateName">Click</button>
</template>

<script>
import { ref } from 'vue';

export default {
  setup() {
    const name = ref('Kossie Coder!');
    /*const greeting = (name) => {
      return 'Hello, ' + name;
    };
    const greet = greeting(name);*/
    const updateName = () => {
      name.value = 'Hello Coder!';
      console.log(name.value);
    };
    return {
      name,
      updateName
    };
  }
};
</script>

<style scoped>
.name {
  color: tomato;
}
</style>
