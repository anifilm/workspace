CALC.createNameSpace('CALC.builder.AbstractOperationBuilder');

CALC.builder.AbstractOperationBuilder = (function () {
  class AbstractOperationBuilder {
    constructor(firstNumber, secondNumber) {
      this.firstNumber = firstNumber;
      this.secondNumber = secondNumber;

      this.result = '';
    }

    operate() {
      throw new Error('You have to implement the method doSomething!');
    }

    toString() {
      return `AbstractOperationBuilder ${this.firstNumber} ${this.secondNumber}`;
    }

    getResult() {
      return this.result;
    }

    buildFirstNumber() {
      this.result += this.firstNumber;
    }

    buildSecondNumber() {
      this.result += this.secondNumber;
    }

    buildAnswer() {
      let answer = this.operate();

      this.result += ` = ${answer}`;
    }

    buildOperator() {
      throw new Error('You have to implement the method doSomething!');
    }
  }

  return AbstractOperationBuilder;
}());
