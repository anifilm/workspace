// 19.3.3 프로토타입의 constructor 프로퍼티와 생성자 함수

// 예제 19-14
// 생성자 함수
function Person(name) {
  this.name = name;
}

const me = new Person('Lee');

// me 객체의 생성자 함수는 Person이다.
console.log(me.constructor === Person); // true
