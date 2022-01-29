<template>
  <v-card style="margin-bottom: 20px">
    <v-container>
      <v-form ref="form" v-model="valid" v-on:submit.prevent="onSubmitForm">
        <v-textarea
          v-model="content"
          outlined
          auto-grow
          clearable
          label="어떤 신기한 일이 있었나요?"
          v-bind:hide-details="hideDetails"
          v-bind:success="success"
          v-bind:success-messages="successMessages"
          v-bind:rules="[
            (v) =>
              this.rulesState === 'ins' ? !!v || '내용을 입력하세요.' : true,
          ]"
          v-on:input="onChangeTextarea"
        />
        <div style="margin-top: 10px">
          <v-btn type="submit" color="green" dark absolute right>등록</v-btn>
          <v-btn>이미지 업로드</v-btn>
        </div>
      </v-form>
    </v-container>
  </v-card>
</template>

<script>
import { mapState } from 'vuex';

export default {
  data() {
    return {
      valid: false,
      hideDetails: true,
      success: false,
      successMessages: '',
      content: '',
      rulesState: '',
    };
  },
  computed: {
    ...mapState('users', ['me']),
  },
  methods: {
    onChangeTextarea(value) {
      if (!value || value.trim().length > 0) {
        this.hideDetails = true;
        this.success = false;
        this.successMessages = '';
        this.rulesState = '';
      } else {
        this.rulesState = 'ins';
      }
    },
    onSubmitForm() {
      if (!this.content || this.content.trim() === '') {
        this.content = '';
        this.hideDetails = false;
        this.success = false;
        this.successMessages = '내용을 입력하세요.';
        this.rulesState = 'ins';
        return;
      }
      if (this.$refs.form.validate()) {
        this.$store
          .dispatch('posts/add', {
            content: this.content,
            User: {
              nickname: this.me.nickname,
            },
            Comments: [],
            Images: [],
            id: String(Date.now()),
            createdAt: Date.now(),
          })
          .then(() => {
            this.content = '';
            this.hideDetails = false;
            this.success = true;
            this.successMessages = '게시글 등록 성공!';
            this.rulesState = '';
          })
          .catch(() => {
            //
          });
      }
    },
  },
};
</script>

<style></style>
