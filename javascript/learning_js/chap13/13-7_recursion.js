// 13.7 재귀

// 건초 더미에서 바늘을 찾는 재귀 예제
function findNeedle(haystack) {
  if (haystack.length === 0) return 'no haystack here!';
  if (haystack.shift() === 'needle') return 'found it!';
  return findNeedle(haystack); // 건초더임에 들어있는 건초가 하나 줄었다.
}

findNeedle(['hay', 'hay', 'hay', 'hay', 'needle', 'hay', 'hay']);

// 팩토리얼 재귀 예제
function fact(n) {
  if (n === 1) return 1;
  return x * fact(n - 1);
}
