CALC.createNameSpace('CALC.lsp.before.Client')

CALC.lsp.before.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let before = CALC.lsp.before;

      let calculator = new before.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new before.AddOperation();
      let answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} + ${secondNumber} = ${answer}`);

      operation = new before.SubstractOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} - ${secondNumber} = ${answer}`);

      operation = new before.MultiplyOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} * ${secondNumber} = ${answer}`);

      // 나누기 연산기능 호출
      secondNumber = 0;
      operation = new before.DivideOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} / ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
