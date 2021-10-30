CALC.createNameSpace('CALC.isp.before.CalcClient');

CALC.isp.before.CalcClient = (function () {
  class CalcClient {
    constructor() {

    }

    request(calculator, operation, firstNumber, secondNumber) {
      calculator.setOperation(operation);
      let answer = calculator.calculate(firstNumber, secondNumber);

      return answer;
    }

    toString() {
      return 'CalcClient';
    }
  }

  return CalcClient;
}());
