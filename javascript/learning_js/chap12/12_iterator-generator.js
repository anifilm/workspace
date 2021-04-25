// chapter 12 이터레이터와 제너레이터

// book 배열 선언
const book = [
  'Twinkle, twinkle, little bat!',
  'How i wonder what you\'re at!',
  'Up above the world you fly,',
  'Like a tea tray in the sky.',
  'Twinkle, twinkle, little bat!',
  'How I wonder what you\'re at!',
]

// book 배열에 values 메서드를 사용하여 이터레이터 생성
const it = book.values();

it.next(); // { value: 'Twinkle, twinkle, little bat!', done: false }
it.next(); // { value: "How i wonder what you're at!", done: false }
it.next(); // { value: 'Up above the world you fly,', done: false }
it.next(); // { value: 'Like a tea tray in the sky.', done: false }
it.next(); // { value: 'Twinkle, twinkle, little bat!', done: false }
it.next(); // { value: "How I wonder what you're at!", done: false }
it.next(); // { value: undefined, done: true }
it.next(); // { value: undefined, done: true }
it.next(); // { value: undefined, done: true }

// 이터레이터와 while 루프를 사용하여 for...of 루프를 구현
const it = book.values();
let current = it.next();
while (!current.done) {
  console.log(current.value);
  current = it.next();
}

/*
이터레이터는 모두 독립적이다.
즉, 새 이터레이터를 생성할 때마다 처음에서 시작한다.
그리고 각각 다른 요소를 가리키는 이터레이터 여러 개를 동시에 사용할 수도 있다.
*/

const it1 = book.values();
const it2 = book.values();
// 어느 이터레이터로 아직 시작하지 않았습니다.

// it1으로 두 페이지를 읽습니다.
it1.next(); // { value: 'Twinkle, twinkle, little bat!', done: false }
it1.next(); // { value: "How i wonder what you're at!", done: false }

// it2로 한 페이지를 읽습니다.
it2.next(); // { value: 'Twinkle, twinkle, little bat!', done: false }

// it1으로 한 페이지를 더 읽습니다.
it1.next(); // { value: 'Up above the world you fly,', done: false }
