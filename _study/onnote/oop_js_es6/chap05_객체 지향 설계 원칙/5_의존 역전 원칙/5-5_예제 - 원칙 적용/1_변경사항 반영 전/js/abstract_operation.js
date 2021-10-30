CALC.createNameSpace('CALC.dip.after.AbstractOperation');

CALC.dip.after.AbstractOperation = (function () {
  class AbstractOperation {
    constructor() {

    }

    operate(firstNumber, secondNumber) {
      throw new Error('You have to implement the method doSomething!');
    }

    toString() {
      return 'AbstractOperation';
    }
  }

  return AbstractOperation;
}());
