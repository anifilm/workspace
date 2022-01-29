<template>
  <div>
    <v-container>
      <v-card>
        <v-container>
          <v-subheader>회원가입</v-subheader>
          <v-form ref="form" v-model="valid" v-on:submit.prevent="onSubmitForm">
            <v-text-field
              type="email"
              label="이메일"
              v-model="email"
              v-bind:rules="emailRules"
              required
            />
            <v-text-field
              type="text"
              label="닉네임"
              v-model="nickname"
              v-bind:rules="nicknameRules"
              required
            />
            <v-text-field
              type="password"
              label="비밀번호"
              v-model="password"
              v-bind:rules="passwordRules"
              required
            />
            <v-text-field
              type="password"
              label="비밀번호 확인"
              v-model="passwordCheck"
              v-bind:rules="passwordCheckRules"
              required
            />
            <v-checkbox
              label="약관에 동의합니다."
              v-model="term"
              v-bind:rules="[(v) => !!v ||'약관에 동의해야 합니다.']"
              required
            />
            <v-btn type="submit" color="green" dark>회원가입</v-btn>
          </v-form>
        </v-container>
      </v-card>
    </v-container>
  </div>
</template>

<script>
export default {
  head() {
    return {
      title: '회원가입'
    };
  },
  data() {
    return {
      valid: false,
      email: '',
      password: '',
      passwordCheck: '',
      nickname: '',
      terms: false,
      emailRules: [
        (v) => !!v || '이메일은 필수 항목입니다.',
        (v) => /.+@.+/.test(v) || '이메일이 유효하지 않습니다.',
      ],
      nicknameRules: [
        (v) => !!v || '닉네임은 필수 항목입니다.'
      ],
      passwordRules: [
        (v) => !!v || '비밀번호는 필수 항목입니다.',
      ],
      passwordCheckRules: [
        (v) => !!v || '비밀번호 확인은 필수 항목입니다.',
        (v) => v === this.password || '비밀번호가 일치하지 않습니다.',
      ],
    };
  },
  methods: {
    onSubmitForm() {
      if (this.$refs.form.validate()) {
        alert('회원가입 시도');
      }
      else {
        alert('폼이 유효하지 않습니다.');
      }
    }
  }
};
</script>
