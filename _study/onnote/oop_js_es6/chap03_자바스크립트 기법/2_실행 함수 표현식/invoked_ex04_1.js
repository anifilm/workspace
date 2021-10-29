// 2.4 반환값

// 2.4.1 값을 반환

let answer = (function (operator, firstNumber, secondNumber) {
  if (operator === '+') {
    return firstNumber + secondNumber;
  }
  else if (operator === '-') {
    return firstNumber - secondNumber;
  }
  else if (operator === '*') {
    return firstNumber * secondNumber;
  }
  else if (operator === '/') {
    return firstNumber / secondNumber;
  }

  return 0;

}('+', 100, 20));

console.log(`answer = ${answer}`);
