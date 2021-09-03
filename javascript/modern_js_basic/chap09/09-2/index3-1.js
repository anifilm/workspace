// 9.2.5 프로토타입 객체의 프로퍼티

// constructor 프로퍼티
function F() {}
console.log(F.prototype.constructor); // Function F() {}

obj = new F();
console.log(obj.constructor); // Function F() {}

// 내부 프로퍼티 [[Prototype]]
function F() {}
console.log(F.prototype.__proto__); // Object {} : Object.prototype

// 프로토타입 객체의 교체 및 constructor 프로퍼티
function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
}
Circle.prototype = {
  constructor: Circle, // 생성자를 constructor로 대입
  area: function () {
    return Math.PI * this.radius * this.radius;
  }
};

var c = new Circle({ x: 0, y: 0 }, 2.0);
console.log(c.constructor); // Function Circle
console.log(c instanceof Circle); // true
