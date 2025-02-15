// 함수는 객체다
// 자바스크립트는 함수형 언어 '스킴(scheme)'과 프로토타입(prototype) 기반 객체지향 언어 '셀프(self)'를
// 모델로 만들어졌다. 따라서 자바스크립트는 객체지향 언어와 함수형 언어의 특징을 모두 가지고 있다.
// 타입스크립트 또한 자바스크립트의 이러한 특징을 모두 포함한다.
// 자바스크립트에서 함수는 Function 클래스의 인스턴스(instance)이다.

// 다음 코드를 실행해 보면 3이 출력되는데, 이는 add가 함수로서 동작한다는 의미이다.
let add = new Function('a', 'b', 'return a + b');
let result = add(1, 2);
console.log(result); // 3

// 위의 내용은 조금 특이하다. add가 함수라면 다음과 같은 구문이어야 하는데, 위의 첫번째 행은 변수 선언문
// 형태로 add 함수를 구현했기 때문이다.
function add(a, b) {
  return a + b;
}
