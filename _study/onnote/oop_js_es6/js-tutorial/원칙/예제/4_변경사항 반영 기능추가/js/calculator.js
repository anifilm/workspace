CALC.createNameSpace('CALC.isp.after.Calculator');

CALC.isp.after.Calculator = (function () {
  let IDisplayable = CALC.isp.after.IDisplayable;

  class Calculator extends IDisplayable {
    constructor() {
      super();

      this.operation = null;
    }

    calculate(firstNumber, secondNumber) {
      let answer = this.operation.operate(firstNumber, secondNumber);
      return answer;
    }

    setOperation(operation) {
      this.operation = operation;
    }

    display(operation, firstNumber, secondNumber) {
      let answer = operation.operate(firstNumber, secondNumber);
      let operator = operation.getOperator();

      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
