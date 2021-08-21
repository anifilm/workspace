// 예제 7-3 이항 연산을 하는 함수

function binaryOperation(op, a, b) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      return a / b;
    case '%':
      return a % b;
    case '^':
      return a ** b;
    default:
      return NaN;
  }
}

console.log(binaryOperation('+', 2, 3));
console.log(binaryOperation('-', 2, 3));
console.log(binaryOperation('*', 2, 3));
console.log(binaryOperation('^', 2, 3));
console.log(binaryOperation('A', 2, 3));
