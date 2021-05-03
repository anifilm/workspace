// 12.7.4 콜백 함수

// 예제 12-49
// n만큼 어떤 일을 반복한다.
function repeat(n) {
  // i를 출력한다.
  for (var i = 0; i < n; i++) {
    process.stdout.write(i + ' ');
  }
  console.log();
}
repeat(5); // 0 1 2 3 4

// 예제 12-50
function repeat1(n) {
  // i를 출력한다.
  for (var i = 0; i < n; i++) {
    process.stdout.write(i + ' ');
  }
  console.log();
}
repeat1(5); // 0 1 2 3 4

function repeat2(n) {
  for (var i = 0; i < n; i++) {
    // i가 홀수일 때만 출력한다.
    if (i % 2) {
      process.stdout.write(i + ' ');
    }
  }
  console.log();
}
repeat2(5); // 1 3
