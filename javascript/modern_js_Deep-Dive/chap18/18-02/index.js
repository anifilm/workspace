// 18.2 함수 객체의 프로퍼티

// 예제 18-02
function square(number) {
  return number * number;
}

console.dir(square);

/*
squre 함수의 모든 프로퍼티의 프로퍼티 어트리뷰트를 Object.getOwnPropertyDescriptors 메서드로 확인해 보면 다음과 같다.
*/

// 예제 18-03
console.log(Object.getOwnPropertyDescriptors(square));
/*
{
  length: { value: 1, writable: false, enumerable: false, configurable: true }
  name: { value: "square", writable: false, enumerable: false, configurable: true }
  arguments: { value: null, writable: false, enumerable: false, configurable: false }
  caller: { value: null, writable: false, enumerable: false, configurable: false }
  prototype: { value: {…}, writable: true, enumerable: false, configurable: false }
}
*/

// __proto__는 square 함수의 프로퍼티가 아니다.
console.log(Object.getOwnPropertyDescriptors(square, '__proto__')); // undefined

// __proto__는 Object.prototype 객체의 접근자 프로퍼티다.
// square 함수는 Object.prototype 객체로부터 __proto__ 접근자 프로퍼티를 상속받는다.
console.log(Object.getOwnPropertyDescriptor(Object.prototype, '__proto__'));
// { get: ƒ, set: ƒ, enumerable: false, configurable: true }
