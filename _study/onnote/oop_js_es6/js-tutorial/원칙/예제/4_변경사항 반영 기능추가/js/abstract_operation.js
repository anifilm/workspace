CALC.createNameSpace('CALC.isp.after.AbstractOperation');

CALC.isp.after.AbstractOperation = (function () {
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
