<template>
  <div>
    <h1>{{ result }}</h1>
    <form @submit.prevent="onSubmitForm">
      <input
        ref="answer"
        :disabled="disabled == 1"
        minlength="4"
        maxlength="4"
        v-model="value"
      />
      <button type="submit" :disabled="disabled == 1">입력</button>
    </form>
    <div>시도: {{ tries.length }}</div>
    <ul>
      <li v-for="t in tries" :key="t.try">
        <div>{{ t.try }}</div>
        <div>{{ t.result }}</div>
      </li>
    </ul>
  </div>
</template>

<script>
const getNumbers = () => {
  const candidataes = [1, 2, 3, 4, 5, 6, 7, 8, 9];
  const array = [];
  for (let i = 0; i < 4; i++) {
    const chosen = candidataes.splice(
      Math.floor(Math.random() * (9 - i)),
      1
    )[0];
    array.push(chosen);
  }
  console.log(array);
  return array;
};

export default {
  data() {
    return {
      answer: getNumbers(), // ex) [1, 5, 3, 4]
      tries: [], // 시도 횟수
      value: '', // 입력
      result: '', // 결과
      disabled: 0
    };
  },
  methods: {
    onSubmitForm() {
      if (this.value === this.answer.join('')) {
        // 정답 맞췄으면
        this.tries.push({
          try: this.value,
          result: '홈런!!!'
        });
        this.result = '홈런!!!';
        this.disabled = 1;
        this.value = '';
      } else {
        if (this.tries.length >= 9) {
          // 10번째 시도
          this.result = `10번 넘게 틀려서 실패! 정답은 ${this.answer.join(
            ','
          )} 입니다.`;
          this.disabled = 1;
        }
        let strike = 0;
        let ball = 0;
        const answerArray = this.value.split('').map(v => parseInt(v));
        for (let i = 0; i < 4; i++) {
          if (answerArray[i] === this.answer[i]) {
            // 숫자 자릿수 모두 정답
            strike++;
          } else if (this.answer.includes(answerArray[i])) {
            // 숫자만 정답
            ball++;
          }
        }
        this.tries.push({
          try: this.value,
          result: `${strike} 스트라이크, ${ball} 볼입니다.`
        });
        this.value = '';
        this.$refs.answer.focus();
      }
    }
  }
};
</script>

<style></style>
