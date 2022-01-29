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
              v-bind:rules="nickname"
              required
            />
            <v-btn type="submit" color="blue" dark>수정</v-btn>
          </v-form>
        </v-container>
      </v-card>
      <v-card style="margin-bottom: 20px">
        <v-container>
          <v-subheader>팔로잉</v-subheader>
          <follow-list />
        </v-container>
      </v-card>
      <v-card style="margin-bottom: 20px">
        <v-container>
          <v-subheader>팔로워</v-subheader>
          <follow-list />
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
      nickname: '',
      nicknameRules: [(v) => !!v || '닉네임을 입력하세요.'],
    };
  },
  methods: {
    onChangeNickname() {
      this.$store.dispatch('users/changeNickname', {
        nickname: this.nickname,
      });
    },
  },
};
</script>

<style></style>
