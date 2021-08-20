// 7.4.3 continue 문

var a = [2, 5, -1, 7, -3, 6, 9];

for (var i = 0, sum = 0; i < a.length; i++) {
  if (a[i] < 0) continue;
  sum += a[i];
}

console.log(sum); // 29


var a = [
  [2, 4, 6, 8],
  [1, 5, 12, 3],
  [7, 6, 8, 5],
  [5, 15, 3, 4],
  [3, 2, 9, 4]
];
var max = Number.NEGATIVE_INFINITY;
mainloop:
for (var i = 0; i < a.length; i++) {
  var average = 0;
  for (var j = 0; j < a[i].length; j++) {
    // 배열에 10보다 큰수가 있으면 평균값 출력없이 처음으로 되돌아간다.
    if (a[i][j] > 10) continue mainloop;
    average += a[i][j];
  }
  average /= a[i].length;
  console.log(`i = ${i} : 평균값 = ${average}`);
  if (max < average) max = average;
}
console.log('최대 평균값 = ' + max);
