// Function

void main() {
  var list = ['apple', 'banana', 'orange'];

  list.forEach(printF);

  // 익명 함수로 출력
  list.forEach((item) {
    print(item);
  });
}

void printF(item) {
  print(item);
}
