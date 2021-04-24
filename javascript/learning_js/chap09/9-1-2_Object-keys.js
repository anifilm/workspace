// 9.1.2 Object.keys

// Object.keys는 객체에서 나열 가능한 문자열 프로퍼티를 배열로 반환
const SYM = Symbol();

const o = { a: 1, b: 2, c: 3, [SYM]: 4 };

Object.keys(o).forEach(prop => console.log(`${prop}: ${o[prop]}`));

// 객체의 프로퍼티 키를 배열로 가져와야 할 때는 Object.keys가 편리하다.

// 객체에서 x로 시작하는 프로퍼티를 모두 가져오는 예제
const o2 = { apple: 1, xochitl: 2, balloon: 3, guitar: 4, xylophone: 5 };

Object.keys(o2)
  .filter(prop => prop.match(/^x/))
  .forEach(prop => console.log(`${prop}: ${o2[prop]}`));
