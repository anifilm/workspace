CALC.createNameSpace('CALC.builder.SubstractOperationBuilder');

CALC.builder.SubstractOperationBuilder = (function () {
  let AbstractOperationBuilder = CALC.builder.AbstractOperationBuilder;

  class SubstractOperationBuilder extends AbstractOperationBuilder {
    constructor(firstNumber, secondNumber) {
      super(firstNumber, secondNumber);
    }

    operate() {
      return this.firstNumber - this.secondNumber;
    }

    toString() {
      return `SubstractOperationBuilder ${this.firstNumber} ${this.secondNumber}`;
    }

    buildOperator() {
      this.result += ' - ';
    }
  }

  return SubstractOperationBuilder;
}());
