<template>
  <v-app>
    <v-app-bar app color="primary" dark>
      <v-app-bar-nav-icon v-on:click="drawer = !drawer" />
      <site-title v-bind:title="title"></site-title>
    </v-app-bar>

    <v-navigation-drawer app v-model="drawer">
      <site-menu></site-menu>
    </v-navigation-drawer>

    <v-content>
      <router-view />
    </v-content>

    <site-footer v-bind:footer="footer"></site-footer>
  </v-app>
</template>

<script>
import SiteTitle from '@/views/site/title';
import SiteMenu from '@/views/site/menu';
import SiteFooter from '@/views/site/footer';

export default {
  components: {
    SiteTitle,
    SiteFooter,
    SiteMenu
  },
  name: 'App',
  data() {
    return {
      drawer: false,
      items: [],
      title: '나의 타이틀입니다.',
      footer: '푸터입니다.'
    };
  }
};
</script>
