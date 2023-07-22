/*
function printTextLength<T>(text: T) {
  console.log(text.length); // .length 구문 오류
}
*/
function printTextLength<T extends { length: number }>(text: T) {
  console.log(text.length);
}

printTextLength<string>('hello');
