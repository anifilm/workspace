CALC.createNameSpace('CALC.builder.MultiplyOperationBuilder');

CALC.builder.MultiplyOperationBuilder = (function () {
  let AbstractOperationBuilder = CALC.builder.AbstractOperationBuilder;

  class MultiplyOperationBuilder extends AbstractOperationBuilder {
    constructor(firstNumber, secondNumber) {
      super(firstNumber, secondNumber);
    }

    operate() {
      return this.firstNumber * this.secondNumber;
    }

    toString() {
      return `MultiplyOperationBuilder ${this.firstNumber} ${this.secondNumber}`;
    }

    buildOperator() {
      this.result += ' * ';
    }
  }

  return MultiplyOperationBuilder;
}());
