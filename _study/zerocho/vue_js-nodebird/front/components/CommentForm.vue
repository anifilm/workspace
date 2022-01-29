<template>
  <v-form ref="form" v-model="valid" style="position: relative" v-on:submit.prevent="onSubmitForm">
    <v-textarea
      v-model="content"
      filled
      auto-grow
      label="댓글 달기"
      v-bind:hide-details="hideDetails"
      v-bind:success="success"
      v-bind:success-messages="successMessages"
      v-bind:rules="[(v) => this.rulesState === 'ins' ? !!v || '내용을 입력하세요.' : true]"
      v-on:input="onChangeTextarea"
    />
    <v-btn type="submit" color="blue" dark absolute top right>댓글 등록</v-btn>
  </v-form>
</template>

<script>
export default {
  props: {
    postId: {
      type: String,
      required: true
    }
  },
  data() {
    return {
      valid: false,
      hideDetails: true,
      success: false,
      successMessages: '',
      content: '',
      rulesState: ''
    };
  },
  computed: {
    me() {
      return this.$store.state.users.me;
    }
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
        console.log('내용을 입력하세요.');
        this.content = '';
        this.hideDetails = false;
        this.success = false;
        this.successMessages = '내용을 입력하세요.';
        this.rulesState = 'ins';
        return;
      }
      if (this.$refs.form.validate()) {
        this.$store.dispatch('posts/addComment', {
          id: Date.now(),
          postId: this.postId,
          content: this.content,
          User: {
            nickname: this.me.nickname
          }
        })
          .then(() => {
            this.content = '';
            this.hideDetails = false;
            this.success = true;
            this.successMessages = '댓글이 등록되었습니다.';
            this.rulesState = '';
          })
          .catch(() => {
            //
          });
      }
    }
  }
};
</script>

<style>

</style>
