// 2.4 반환값

// 2.4.2 함수를 반환

let getAnswer = (function (operator, firstNumber, secondNumber) {
  let result = 0;

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

  return function () {
    return result;
  };

}('+', 100, 20));

console.log(`answer = ${getAnswer}`);
