// 6.7 화살표 표기법

/*
화살표 함수에는 일반적인 함수와 중요한 차이가 있습니다. this가 다른 변수와 마찬가지로,
정적으로 lexically 묶인다는 겁니다. 이 장에서 만들었던 greetBackwards 예제를 고쳐 써 봅시다.
화살표 함수를 사용하면 내부 함수 안에서 this를 사용할 수 있습니다.
*/

const o = {
  name: 'Julie',
  greetBackwards: function () {
    const getReverseName = () => {
      let nameBackwards = '';
      for (let i = this.name.length - 1; i >= 0; i--) {
        nameBackwards += this.name[i];
      }
      return nameBackwards;
    };
    return `${getReverseName()} si eman ym ,olleH`;
  },
};

o.greetBackwards();

/*
화살표 함수에는 일반적인 함수와 다른 점이 두 가지 더 있습니다. 화살표 함수는 (9장에서 설명할)
객체 생성자로 사용할 수 없고, arguments 변수도 사용할 수 없습니다.
하지만 ES6에서 확산 연산자(...)가 생겼으니 arguments 변수는 필요가 없긴 합니다.
*/
