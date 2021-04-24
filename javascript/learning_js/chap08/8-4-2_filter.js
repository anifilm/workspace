// 8.4 map과 filter

/*
filter 메서드는 배열에서 필요한 것들만 남길 목적으로 만들어졌습니다.
*/

// 카드 덱을 만듭니다.
const cards = [];
for (let suit of ['H', 'C', 'D', 'S']) { // 하트, 클로버, 다이아몬드, 스페이드
  for (let value = 1; value <= 13; value++) {
    cards.push({ suit, value });
  }
}

// value가 2인 카드
cards.filter(c => c.value === 2);
// [
//   { suit: 'H', value: 2 },
//   { suit: 'C', value: 2 },
//   { suit: 'D', value: 2 },
//   { suit: 'S', value: 2 }
// ]

// 다이아몬드
cards.filter(c => c.suit === 'D');

// 킹, 퀸, 주니어
cards.filter(c => c.value > 10);

// 하트의 킹, 퀸, 주니어
cards.filter(c => c.value > 10 && c.suit === 'H');
