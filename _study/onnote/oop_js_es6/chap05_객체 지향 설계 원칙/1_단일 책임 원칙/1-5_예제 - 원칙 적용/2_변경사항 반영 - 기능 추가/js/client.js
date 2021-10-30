CALC.createNameSpace('CALC.sip.after.Client')

CALC.sip.after.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let after = CALC.sip.after;

      let calculator = new after.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new after.AddOperation();
      calculator.setAddOperation(operation);
      let answer = calculator.calculate('+', firstNumber, secondNumber);
      console.log(`${firstNumber} + ${secondNumber} = ${answer}`);

      operation = new after.SubstractOperation();
      calculator.setSubstractOperation(operation);
      answer = calculator.calculate('-', firstNumber, secondNumber);
      console.log(`${firstNumber} - ${secondNumber} = ${answer}`);

      operation = new after.MultiplyOperation();
      calculator.setMultiplyOperation(operation);
      answer = calculator.calculate('*', firstNumber, secondNumber);
      console.log(`${firstNumber} * ${secondNumber} = ${answer}`);
      // 나누기 연산기능 추가
      operation = new after.DivideOperation();
      calculator.setDivideOperation(operation);
      answer = calculator.calculate('/', firstNumber, secondNumber);
      console.log(`${firstNumber} / ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
