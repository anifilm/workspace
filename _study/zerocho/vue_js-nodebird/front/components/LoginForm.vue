<template>
  <v-container>
    <v-card>
      <v-form ref="form" v-model="valid" v-on:submit.prevent="onSubmitForm">
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
        <v-btn type="submit" v-bind:disabled="!valid" color="green" dark>로그인</v-btn>
        <v-btn nuxt to="/signup">회원가입</v-btn>
      </v-form>
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
        (v) => /.+@.+/.test(v) || '이메일이 유효하지 않습니다.'
      ],
      passwordRules: [
        (v) => !!v || '비밀번호는 필수 항목입니다.'
      ]
    };
  },
  methods: {
    onSubmitForm() {
      this.$refs.form.validate();
    }
  }
};
</script>

<style>

</style>
