CALC.createNameSpace('CALC.builder.DivideOperationBuilder');

CALC.builder.DivideOperationBuilder = (function () {
  let AbstractOperationBuilder = CALC.builder.AbstractOperationBuilder;

  class DivideOperationBuilder extends AbstractOperationBuilder {
    constructor(firstNumber, secondNumber) {
      super(firstNumber, secondNumber);
    }

    operate() {
      return this.firstNumber / this.secondNumber;
    }

    toString() {
      return `DivideOperationBuilder ${this.firstNumber} ${this.secondNumber}`;
    }

    buildOperator() {
      this.result += ' / ';
    }
  }

  return DivideOperationBuilder;
}());
