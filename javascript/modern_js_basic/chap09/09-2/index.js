// 9.2.3 프로토타입 체인

// 내부 프로퍼티 [[Prototype]]
var obj = {};
console.log(obj.__proto__); // Object {}

// 프로토타입 체인
var objA = {
  name: 'Tom',
  sayHello: function () {
    console.log('Hello! ' + this.name);
  }
};
var objB = {
  name: 'Huck'
};
objB.__proto__ = objA;
var objC = {};
objC.__proto__ = objB;
objC.sayHello(); // Hello! Huck

// 프로토타입 가져오기
function F() {}
var obj = new F();
console.log(Object.getPrototypeOf(obj)); // Object {}
