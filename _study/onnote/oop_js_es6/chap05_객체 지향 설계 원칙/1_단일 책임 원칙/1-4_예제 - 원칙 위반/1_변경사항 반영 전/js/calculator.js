CALC.createNameSpace('CALC.sip.before.Calculator');

CALC.sip.before.Calculator = (function () {
  class Calculator {
    constructor() {

    }

    calculate(operator, firstNumber, secondNumber) {
      let answer = 0;

      if (operator === '+') {
        answer = firstNumber + secondNumber;
      }
      else if (operator === '-') {
        answer = firstNumber - secondNumber;
      }
      else if (operator === '*') {
        answer = firstNumber * secondNumber;
      }

      return answer;
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
