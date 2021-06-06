const app = new Vue({
  el: '#root',
  data: {
    first: Math.ceil(Math.random() * 9),
    second: Math.ceil(Math.random() * 9),
    value: '',
    result: ''
  },
  methods: {
    onSubmitForm(e) {
      e.preventDefault();
      if (this.first * this.second === parseInt(this.value)) {
        this.result = '정답';
        this.first = Math.ceil(Math.random() * 9);
        this.second = Math.ceil(Math.random() * 9);
        this.value = '';
        this.$refs.answer.focus();
      } else {
        this.result = '땡';
        this.value = '';
        this.$refs.answer.focus();
      }
    }
  }
});
