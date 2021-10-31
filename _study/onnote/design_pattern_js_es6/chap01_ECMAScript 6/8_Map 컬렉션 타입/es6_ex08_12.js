// 8.12 모든 데이터 함수 처리

let fruitMap = new Map([['Apple', 'red'], ['Melon', 'green']]);

fruitMap.forEach(function (value, key, map) {
  console.log(`${key}: ${value}`);
});
// Apple: red
// Melon: green
