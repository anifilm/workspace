// 4.1.2 객체 리터럴로 객체 생성하기

var card = { suit: '하트', rank: 'A' };

console.log(card.suit); // 하트
console.log(card['rank']); // A

console.log(card.color); // undefined

var obj = {};
console.log(obj); // {}


// 4.1.3 프로퍼티 추가와 삭제

card.value = 14;
console.log(card); // { suit: '하트', rank: 'A', value: 14 }

delete card.rank;
console.log(card); // { suit: '하트', value: 14 }


// 4.1.4 in 연산자로 프로퍼티가 있는지 확인하기

var card = { suit: '하트', rank: 'A' };

console.log('suit' in card); // true
console.log('color' in card); // false

console.log('toString' in card); // true


// 4.1.5 객체 리터럴 예제

// 예1 - 좌표평면의 점을 표현하는 객체
var p = { x: 1.0, y: 2.5 };

// 예2 - 원을 표현하는 객체
var circle = {
  center: { x: 1.0, y: 2.0 }, // 원의 중점을 표현하는 객체
  radius: 2.5 // 원의 반지름
};

console.log(circle.center.x); // 1.0

// 예3 - 회원 정보를 표현하는 객체
var person = {
  name: '이정규', // 회원 이름
  age: 18, // 나이
  sex: '남', // 성별
  married: false // 결혼 여부를 표현하는 논리값
};


// 4.1.7 객체는 참조 타입

var a = card;

console.log(a.suit); // 하트

a.suit = '스페이드';
console.log(a.suit); // 스페이드
console.log(card.suit); // 스페이드
