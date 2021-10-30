CALC.createNameSpace('CALC.sip.before.Client')

CALC.sip.before.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let before = CALC.sip.before;

      let calculator = new before.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operator = '+';
      let answer = calculator.calculate(operator, firstNumber, secondNumber);
      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);

      operator = '-';
      answer = calculator.calculate(operator, firstNumber, secondNumber);
      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);

      operator = 'x';
      answer = calculator.calculate(operator, firstNumber, secondNumber);
      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);
      // 나누기 연산기능 추가
      operator = '/';
      answer = calculator.calculate(operator, firstNumber, secondNumber);
      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
