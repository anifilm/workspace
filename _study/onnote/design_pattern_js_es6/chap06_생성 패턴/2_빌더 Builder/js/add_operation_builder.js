CALC.createNameSpace('CALC.builder.AddOperationBuilder');

CALC.builder.AddOperationBuilder = (function () {
  let AbstractOperationBuilder = CALC.builder.AbstractOperationBuilder;

  class AddOperationBuilder extends AbstractOperationBuilder {
    constructor(firstNumber, secondNumber) {
      super(firstNumber, secondNumber);
    }

    operate() {
      return this.firstNumber + this.secondNumber;
    }

    toString() {
      return `AddOperationBuilder ${this.firstNumber} ${this.secondNumber}`;
    }

    buildOperator() {
      this.result += ' + ';
    }
  }

  return AddOperationBuilder;
}());
