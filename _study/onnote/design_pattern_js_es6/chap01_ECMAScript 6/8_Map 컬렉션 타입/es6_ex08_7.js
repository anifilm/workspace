// 8.7 데이터 삭제

const map = new Map();

map.set('Apple', 'red');
map.set('Melon', 'green');

console.log(map.has('Apple')); // true

map.delete('Apple');

console.log(map.has('Apple')); // false
