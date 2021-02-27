// 6.5 this 키워드

// 중첩된 함수안에서 this를 사용하려다 보면 혼란스러울 때가 많습니다. 다음 예제를 보십시오.
// 이 예제에는 메서드 안에 보조 함수가 있습니다.
const o = {
  name: 'Julie',
  greetBackwards: function() {
    function getReverseName() {
      let nameBackwards = '';
      for (let i = this.name.length-1; i >= 0; i--) { // this.name~ 에서 오류 발생
        nameBackwards += this.name[i];
      }
      return nameBackwards;
    }
    return `${getReverseName()} si emen ym, olleH`;
  },
};

o.greetBackwards();
