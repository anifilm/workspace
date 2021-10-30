CALC.createNameSpace('CALC.isp.after.IDisplayable');

CALC.isp.after.IDisplayable = (function () {
  class IDisplayable {
    constructor() {

    }

    // 인터페이스 메서드명 변경
    newDisplay(operation, firstNumber, secondNumber) {
      throw new Error('You have to implement the method doSomething!');
    }

    toString() {
      return 'IDisplayable';
    }
  }

  return IDisplayable;
}());
