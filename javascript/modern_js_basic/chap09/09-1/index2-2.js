// 9.1.2 프로토타입

// Circle 생성자
function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
}
// Circle 생성자의 prototype 프로퍼티에 area 메서드를 추가
Circle.prototype.area = function () {
  return Math.PI * this.radius * this.radius;
};

// Circle 생성자로 인스턴스를 생성
var c1 = new Circle({ x: 0, y: 0 }, 2.0);
var c2 = new Circle({ x: 0, y: 1 }, 3.0);
var c3 = new Circle({ x: 1, y: 0 }, 1.0);

console.log('넓이 = ' + c1.area()); // 넓이 = 12.566370614359172
