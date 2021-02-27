// 6.5 this 키워드

// 중첩된 함수안에서 this를 사용하려다 보면 혼란스러울 때가 많습니다. 다음 예제를 보십시오.
// 이 예제에는 메서드 안에 보조 함수가 있습니다.
/*
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

위의 예제에서는 이름을 거꾸로 쓰고자 중첩된 함수 getReverseName를 사용했습니다. 하지만 getReverseName은
의도한 대로 동작하지 않습니다. o.greetBackwards()를 호출하는 시점체서 자바스크립트는 this를 의도한 대로
o에 연결하지만, greetBackwards 안에서 getReverseName을 호출하면 this는 o가 아닌 다른 것에 묶입니다.
*/

// 이런 문제를 해결하기 위해 널리 사용하는 방법은 다른 변수에 this를 할당하는 겁니다.
const o = {
  name: 'Julie',
  greetBackwards: function() {
    const self = this;
    function getReverseName() {
      let nameBackwards = '';
      for (let i = self.name.length-1; i >= 0; i--) {
        nameBackwards += self.name[i];
      }
      return nameBackwards;
    }
    return `${getReverseName()} si emen ym ,olleH`;
  },
};

o.greetBackwards()  // "eiluJ si emen ym, olleH"
