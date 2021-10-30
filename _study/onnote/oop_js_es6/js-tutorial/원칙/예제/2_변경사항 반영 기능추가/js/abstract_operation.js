CALC.createNameSpace('CALC.isp.before.AbstractOperation');

CALC.isp.before.AbstractOperation = (function () {
  class AbstractOperation {
    constructor() {

    }

    operate(firstNumber, secondNumber) {
      throw new Error('You have to implement the method doSomething!');
    }

    getOperator() {
      throw new Error('You have to implement the method doSomething!');
    }

    toString() {
      return 'AbstractOperation';
    }
  }

  return AbstractOperation;
}());
