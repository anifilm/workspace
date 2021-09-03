// 9.2.5 프로토타입 객체의 프로퍼티

// 인스턴스 생성 후에 생성자의 프로토타입을 수정하거나 교체한 경우
function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
}
var c = new Circle({ x: 0, y: 0 }, 2.0);

/*
Circle.prototype = {
  constructor: Circle,
  area: function () {
    return Math.PI * this.radius * this.radius;
  }
};

c.area(); // TypeError: c.area is not a function
*/
Circle.prototype.area = function () {
  return Math.PI * this.radius * this.radius;
};

c.area(); // 12.566370614359172
console.log(c.area());
