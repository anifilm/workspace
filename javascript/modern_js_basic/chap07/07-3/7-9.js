// 예제 7-9 배열 요소의 합계 구하기

function sumArray(arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}

var arr = [3, 5, 1, 2, 6, 7];
console.log(sumArray(arr)); // 24
