// 8.8 모든 데이터 삭제

const map = new Map();

map.set('Apple', 'red');
map.set('Melon', 'green');

console.log(map.has('Apple')); // true
console.log(map.has('Melon')); // true

map.clear();

console.log(map.has('Apple')); // false
console.log(map.has('Melon')); // false
