/*
객체 생성 방법 중에서 가장 일반적이고 간단한 방법은 객체 리터럴을 사용하는 방법이다.
객체 리터럴은 중괄호({...}) 내에 0개 이상의 프로퍼티를 정의한다.
변수에 할당되는 시점에 자바스크립트 엔진은 객체 리터럴을 해석해 객체를 생성한다.
*/

// 예제 10-01
var person = {
  name: 'Lee',
  sayHello: function () {
    console.log(`Hello! My name is ${this.name}.`);
  }
};

console.log(typeof person); // object
console.log(person); // { name: "Lee", sayHello: ƒ }

// 예제 10-02
var empty = {}; // 빈 객체
console.log(typeof empty); // object
