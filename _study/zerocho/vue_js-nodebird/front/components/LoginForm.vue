<template>
  <v-container v-if="!me">
    <v-card>
      <v-form ref="form" v-model="valid" v-on:submit.prevent="onSubmitForm">
        <v-container>
          <v-text-field
            type="email"
            label="이메일"
            v-model="email"
            v-bind:rules="emailRules"
            required
          />
          <v-text-field
            type="password"
            label="비밀번호"
            v-model="password"
            v-bind:rules="passwordRules"
            required
          />
          <v-btn
            type="submit"
            v-bind:disabled="!valid"
            color="green"
            style="color: white"
            >로그인</v-btn
          >
          <v-btn nuxt to="/signup">회원가입</v-btn>
        </v-container>
      </v-form>
    </v-card>
  </v-container>
  <v-container v-else>
    <v-card>
      <v-container>
        {{ me.nickname }}님 로그인되었습니다.
        <div style="margin-top: 10px">
          <v-btn v-on:click="onLogOut">로그아웃</v-btn>
        </div>
      </v-container>
    </v-card>
  </v-container>
</template>

<script>
export default {
  data() {
    return {
      valid: false,
      email: '',
      password: '',
      emailRules: [
        (v) => !!v || '이메일은 필수 항목입니다.',
        (v) => /.+@.+/.test(v) || '이메일이 유효하지 않습니다.',
      ],
      passwordRules: [(v) => !!v || '비밀번호는 필수 항목입니다.'],
    };
  },
  computed: {
    me() {
      return this.$store.state.users.me;
    },
  },
  methods: {
    onSubmitForm() {
      if (this.$refs.form.validate()) {
        this.$store.dispatch('users/logIn', {
          email: this.email,
          nickname: '제로초',
        });
      }
    },
    onLogOut() {
      this.$store.dispatch('users/logOut');
    },
  },
};
</script>

<style></style>
