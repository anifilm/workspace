// 9.2.4 new 연산자의 역할

function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
}
Circle.prototype.area = function () {
  return Math.PI * this.radius * this.radius;
};

var c = new Circle({ x: 0, y: 0 }, 2.0);
