// 6.5 this 키워드

const o = {
  name = 'Wallace',
  speak() { return `My name is ${this.name}!`; },
}

// o.speak()를 호출하면 this는 o에 묶입니다.
o.speak();  // "My name is Wallace!"

/*
this는 함수를 어떻게 선언 했느냐가 아니라 어떻게 호출 했느냐에 따라 달라진다는 것을 이해해야 합니다.
즉, this가 o에 묶인 이유는 speak가 o의 프로퍼티여서가 아니라, o에서 speak를 호출했기 때문입니다.
*/

// 같은 함수를 변수에 할당하면 어떻게 되는지 봅시다.
const speak = o.speak;
speak === o.speak;  // true, 두 변수는 같은 함수를 가리킵니다.
speak();  // "My name is undefined!"

// 함수를 이렇게 호출하면 자바스크립트는 이 함수가 어디에 속하는지 알 수 없으므로 this는 undefined에 묶입니다.

/*
NOTE_ 앞의 예제에서 한 것처럼 함수의 this가 어디에 묶이는지 명확히 알 수 없도록 호출했을 때 this를
      결정하는 방법은 매우 복잡합니다. 스트릭트 모드인지 아닌지에 따라 다르고, 함수를 어디에서 호출
      했느냐에 따라서도 다릅니다. 이런 상황을 피하는 것이 최선이므로 자세한 내용은 의도적으로 생략
      했습니다. 더 알고 싶다면 코드 포매팅에 관한 MDN 문서를 보십시오.
*/
