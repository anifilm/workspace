<template>
  <div>
    <v-container>
      <v-card style="margin-bottom: 20px">
        <v-container>
          <v-subheader>내 프로필</v-subheader>
          <v-form v-model="valid" v-on:submit.prevent="onChangeNickname">
            <v-text-field
              label="닉네임"
              v-model="nickname"
              v-bind:rules="nicknameRules"
              clearable
              required
            />
            <v-btn type="submit" color="blue" dark>수정</v-btn>
          </v-form>
        </v-container>
      </v-card>
      <v-card style="margin-bottom: 20px">
        <v-container>
          <v-subheader>팔로잉</v-subheader>
          <follow-list
            v-bind:users="followingList"
            v-bind:remove="removeFollowing"
          />
          <v-btn
            v-on:click="loadMoreFollowings"
            v-if="hasMoreFollowing"
            color="blue"
            dark
            style="width: 100%"
            >더보기</v-btn
          >
        </v-container>
      </v-card>
      <v-card style="margin-bottom: 20px">
        <v-container>
          <v-subheader>팔로워</v-subheader>
          <follow-list
            v-bind:users="followerList"
            v-bind:remove="removeFollower"
          />
          <v-btn
            v-on:click="loadMoreFollowers"
            v-if="hasMoreFollower"
            color="blue"
            dark
            style="width: 100%"
            >더보기</v-btn
          >
        </v-container>
      </v-card>
    </v-container>
  </div>
</template>

<script>
import FollowList from '~/components/FollowList';

export default {
  components: {
    FollowList,
  },
  head() {
    return {
      title: '프로필',
    };
  },
  data() {
    return {
      valid: false,
      nickname: this.$store.state.users.me.nickname,
      nicknameRules: [(v) => !!v || '닉네임을 입력하세요.'],
    };
  },
  computed: {
    followingList() {
      return this.$store.state.users.followingList;
    },
    followerList() {
      return this.$store.state.users.followerList;
    },
    hasMoreFollowing() {
      return this.$store.state.users.hasMoreFollowing;
    },
    hasMoreFollower() {
      return this.$store.state.users.hasMoreFollower;
    },
  },
  fetch({ store }) {
    store.dispatch('users/loadFollowings');
    store.dispatch('users/loadFollowers');
  },
  methods: {
    onChangeNickname() {
      this.$store.dispatch('users/changeNickname', {
        nickname: this.nickname,
      });
    },
    removeFollowing(id) {
      this.$store.dispatch('users/removeFollowing', { id });
    },
    removeFollower(id) {
      this.$store.dispatch('users/removeFollower', { id });
    },
    loadMoreFollowings() {
      this.$store.dispatch('users/loadFollowings');
    },
    loadMoreFollowers() {
      this.$store.dispatch('users/loadFollowers');
    },
  },
  middleware: 'authenticated',
};
</script>

<style></style>
