// 4.3.1 생성자로 객체 생성하기

function Card(suit, rank) {
  this.suit = suit;
  this.rank = rank;
}

var card = new Card('하트', 'A');

console.log(card); // Card { suit: '하트', rank: 'A' }

/* 객체 리터럴로 표현
car card = {};
card.suit = '하트';
card.rank = 'A';
*/


// 4.3.2 메서드를 가진 객체를 생성하는 생성자

function Circle(center, radius) {
  this.center = center;
  this.radius = radius;
  this.area = function () {
    return Math.PI * this.radius * this.radius;
  };
}
var p = { x: 0, y: 0 };
var c = new Circle(p, 2.0);
console.log('넓이 = ' + c.area()); // 넓이 = 12.566370614359172
