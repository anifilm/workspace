// 19.8 오버라이딩과 프로퍼티 섀도잉

// 예제 19-36
const Person = (function () {
  // 생성자 함수
  function Person(name) {
    this.name = name;
  }

  // 프로토타입 메서드
  Person.prototype.sayHello = function () {
    console.log(`Hi! My name is ${this.name}`);
  };

  // 생성자 함수를 반환
  return Person;
})();

const me = new Person('Lee');

// 인스턴스 메서드
me.sayHello = function () {
  console.log(`Hey My name is ${this.name}`);
};

// 인스턴스 메서드가 호출된다. 프로토타입 메서드는 인스턴스 메서드에 의해 가려진다.
me.sayHello(); // "Hey! My name is Lee"

// 예제 19-37
// 인스턴스 메서드를 삭제한다.
delete me.sayHello;
// 인스턴스에는 sayHello 메서드가 없으므로 프로토타입 메서드가 호출된다.
me.sayHello(); // "Hi! My name is Lee"

// 예제 19-39
// 프로토타입 메서드 변경
Person.prototype.sayHello = function () {
  console.log(`Hey My name is ${this.name}`);
}
me.sayHello(); // "Hey! My name is Lee"

// 프토토타입 메서드 삭제
delete Person.prototype.sayHello;
me.sayHello(); // TypeError: me.sayHello is not a function
