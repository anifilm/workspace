// 9.1.1 객체의 생성

// 객체 리터럴로 생성하는 방법
var card = {
  suit: '하트',
  rank: 'A'
};

// 생성자로 생성하는 방법
function Card(suit, rank) {
  this.suit = suit;
  this.rank = rank;
}

var card = new Card('하트', 'A');

// Object.create로 생성하는 방법
var card = Object.create(Obejct.prototype, {
  suit: {
    value: '하트',
    writable: true,
    enumerable: true,
    configureable: true
  },
  rank: {
    value: 'A',
    writable: true,
    enumerable: true,
    configureable: true
  }
});
