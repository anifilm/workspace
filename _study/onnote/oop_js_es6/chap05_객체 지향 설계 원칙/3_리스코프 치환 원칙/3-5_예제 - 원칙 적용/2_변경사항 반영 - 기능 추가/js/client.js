CALC.createNameSpace('CALC.lsp.after.Client')

CALC.lsp.after.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let after = CALC.lsp.after;

      let calculator = new after.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new after.AddOperation();
      let answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} + ${secondNumber} = ${answer}`);

      operation = new after.SubstractOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} - ${secondNumber} = ${answer}`);

      operation = new after.MultiplyOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} * ${secondNumber} = ${answer}`);

      // 나누기 연산기능 호출
      secondNumber = 0;
      operation = new after.DivideOperation();
      answer = calculator.calculate(operation, firstNumber, secondNumber);
      console.log(`${firstNumber} / ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
