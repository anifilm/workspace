CALC.createNameSpace('CALC.ocp.before.Calculator');

CALC.ocp.before.Calculator = (function () {
  class Calculator {
    constructor() {
      this.addOperation = null;
      this.substractOperation = null;
      this.multiplyOperation = null;
    }

    add(firstNumber, secondNumber) {
      let answer = this.addOperation.operate(firstNumber, secondNumber);
      return answer;
    }

    substract(firstNumber, secondNumber) {
      let answer = this.substractOperation.operate(firstNumber, secondNumber);
      return answer;
    }

    multiply(firstNumber, secondNumber) {
      let answer = this.multiplyOperation.operate(firstNumber, secondNumber);
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
