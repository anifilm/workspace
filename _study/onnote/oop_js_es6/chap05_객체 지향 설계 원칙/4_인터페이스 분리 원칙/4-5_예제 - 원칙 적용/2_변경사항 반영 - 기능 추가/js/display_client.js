CALC.createNameSpace('CALC.isp.after.DisplayClient');

CALC.isp.after.DisplayClient = (function () {
  class DisplayClient {
    constructor() {

    }

    request(displayable, operation, firstNumber, secondNumber) {
      // 변경된 인터페이스 메서드명 적용
      displayable.newDisplay(operation, firstNumber, secondNumber);
    }

    toString() {
      return 'DisplayClient';
    }
  }

  return DisplayClient;
}());
