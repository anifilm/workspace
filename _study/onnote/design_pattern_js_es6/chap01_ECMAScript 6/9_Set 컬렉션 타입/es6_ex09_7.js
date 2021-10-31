// 9.7 모든 데이터 삭제

const set = new Set();

set.add('Apple');
set.add('Melon');

console.log(set.has('Apple')); // true
console.log(set.had('Melon')); // true

set.clear();

console.log(set.has('Apple')); // false
console.log(set.had('Melon')); // false
