// 8.4 map과 filter

// 카드 덱을 만듭니다.
const cards = [];
for (let suit of ['H', 'C', 'D', 'S']) { // 하트, 클로버, 다이아몬드, 스페이드
  for (let value = 1; value <= 13; value++) {
    cards.push({ suit, value });
  }
}

function cardToString(c) {
  const suits = { 'H': '\u2665', 'C': '\u2663', 'D': '\u2666', 'S': '\u2660' };
  const values = { 1: 'A', 11: 'J', 12: 'Q', 13: 'K' };
  // cardToString을 호출할 때마가 매번 값을 만드는 건 그리 효율적인 방법은 아니다.
  // 더 효율적인 방법을 생각해 보라.
  for (let i = 2; i <= 10; i++) {
    values[i] = i;
  }
  return values[c.value] + suits[c.suit];
}

// value가 2인 카드
cards.filter(c => c.value === 2).map(cardToString);
// [ '2♥', '2♣', '2♦', '2♠' ]

// 하트의 킹, 퀸, 주니아
cards.filter(c => c.value > 10 && c.suit === 'H').map(cardToString);
// [ 'J♥', 'Q♥', 'K♥' ]
