// 9.1.2 프로토타입

// 생성자 안에서 메서드를 정의하는 방식의 문제점
function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
  this.area = function () {
    return Math.PI * this.radius * this.radius;
  };
}

var c1 = new Circle({ x: 0, y: 0 }, 2.0);
var c2 = new Circle({ x: 0, y: 1 }, 3.0);
var c3 = new Circle({ x: 1, y: 0 }, 1.0);
/*
  각각의 인스턴스가 동일한 메서드 area를 개별적으로 가지게 된다. (메모리 낭비의 문제점 발생)
*/

// 프로토 타입 객체
function F() {}
console.log(F.prototype); // Object {}

F.prototype.prop = 'prototype value';
var obj = new F();
console.log(obj.prop); // prototype value

obj.prop = 'instance value';
console.log(obj.prop); // instance value
console.log(F.prototype.prop); // prototype value
