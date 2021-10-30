CALC.createNameSpace('CALC.sip.after.Calculator');

CALC.sip.after.Calculator = (function () {
  class Calculator {
    constructor() {
      this.addOperation = null;
      this.substractOperation = null;
      this.multiplyOperation = null;
    }

    calculate(operator, firstNumber, secondNumber) {
      let answer = 0;

      if (operator === '+') {
        answer = this.addOperation.add(firstNumber, secondNumber);
      }
      else if (operator === '-') {
        answer = this.substractOperation.substract(firstNumber, secondNumber);
      }
      else if (operator === '*') {
        answer = this.multiplyOperation.multiply(firstNumber, secondNumber);
      }

      return answer;
    }

    setAddOperation(addOperation) {
      this.addOperation = addOperation;
    }

    setSubstractOperation(substractOperation) {
      this.substractOperation = substractOperation;
    }

    setMultiplyOperation(multiplyOperation) {
      this.multiplyOperation = multiplyOperation;
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
