const app = new Vue({
  el: '#root',
  data: {
    word: '제로초',
    result: '',
    value: ''
  },
  methods: {
    onSubmitForm(e) {
      e.preventDefault();
      if (this.word[this.word.length - 1] == this.value[0]) {
        this.result = '딩동댕';
        this.word = this.value;
      } else {
        this.result = '땡';
      }
      this.value = '';
      this.$refs.answer.focus();
    }
  }
});
