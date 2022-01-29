<template>
  <v-container>
    <post-form v-if="me" />
    <div>
      <post-card v-for="p in mainPosts" v-bind:key="p.id" v-bind:post="p" />
    </div>
  </v-container>
</template>

<script>
import PostForm from '~/components/PostForm';
import PostCard from '~/components/PostCard';

export default {
  components: {
    PostForm,
    PostCard
  },
  data() {
    return {
      name: 'Nuxt.js'
    };
  },
  computed: {
    me() {
      return this.$store.state.users.me;
    },
    mainPosts() {
      return this.$store.state.posts.mainPosts;
    }
  }
};
</script>

<style>

</style>
