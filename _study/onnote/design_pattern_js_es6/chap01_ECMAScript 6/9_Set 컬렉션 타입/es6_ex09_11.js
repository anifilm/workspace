// 9.11 모든 데이터 함수 처리

const fruitSet = new Set(['Apple', 'Melon']);

fruitSet.forEach(function (value1, value2, map) {
  console.log(`${value1}: ${value2}`);
});
// Apple: Apple
// Melon: Melon
