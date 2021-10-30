CALC.createNameSpace('CALC.isp.after.IDisplayable');

CALC.isp.after.IDisplayable = (function () {
  class IDisplayable {
    constructor() {

    }

    display(operation, firstNumber, secondNumber) {
      throw new Error('You have to implement the method doSomething!');
    }

    toString() {
      return 'IDisplayable';
    }
  }

  return IDisplayable;
}());
