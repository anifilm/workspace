// 4.2.12 함수 리터럴로 함수 정의하기

var square = function (x) {
  return x * x;
};

square(3); // 9
console.log(square(3));


// 4.2.13 객체의 메서드

var circle = {
  center: { x: 1.0, y: 2.0 }, // 원의 중점을 표현하는 객체
  radius: 2.5, // 원의 반지름
  area: function () { // 원의 넓이를 구하는 메서드
    return Math.PI * this.radius * this.radius;
  }
}

circle.area(); // 19.634954084936208
console.log(circle.area());

circle.translate = function (a, b) {
  this.center.x += a;
  this.center.y += b;
};

circle.translate(1, 2);

circle.center; // { x: 2, y: 4 }
console.log(circle.center);
