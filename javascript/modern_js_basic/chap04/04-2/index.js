// 4.2.2 함수 선언문으로 함수 정의하기

function square(x) {
  return x * x;
}


// 4.2.4 함수 호출

square(3); // 9
console.log(square(3));


// 4.2.5 인수

function dist(p, q) {
  var dx = q.x - p.x;
  var dy = q.y - p.y;
  return Math.sqrt(dx * dx + dy * dy);
}

var p1 = { x: 1, y: 1 };
var p2 = { x: 4, y: 5 };
var d = dist(p1, p2); // 5

console.log(d);

var bark = function () {
  console.log('Bow-wow');
}
bark(); // Bow-wow

console.log(bark()); // > undefined


// 4.2.8 값으로서의 함수

var sq = square;
console.log(sq(5)); // 25


// 4.2.9 참조의 의한 호출과 값에 의한 호출

function add1(x) {
  return x + 1;
}
var a = 3;
var b = add1(a);
console.log('a = ' + a + ', b = ' + b); // a = 3, b = 4

function add1(p) {
  p.x += 1;
  p.y += 1;
  return p;
}
var a = { x: 3, y: 4 };
var b = add1(a);
console.log(a, b); // { x: 4, y: 5 } { x: 4, y: 5 }
