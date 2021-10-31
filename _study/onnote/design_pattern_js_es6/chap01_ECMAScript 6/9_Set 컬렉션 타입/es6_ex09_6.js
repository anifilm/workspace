// 9.6 데이터 삭제

const set = new Set();

set.add('Apple');
set.add('Melon');

console.log(set.has('Apple')); // true

set.delete('Apple');

console.log(set.has('Apple')); // false
