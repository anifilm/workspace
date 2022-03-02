<template>
  <div id="app">
    <router-view name="header" />
    <router-view name="menu" />
    <router-view />
    <router-view name="footer" />
  </div>
</template>

<script>
export default {
  name: 'App',
};
</script>
