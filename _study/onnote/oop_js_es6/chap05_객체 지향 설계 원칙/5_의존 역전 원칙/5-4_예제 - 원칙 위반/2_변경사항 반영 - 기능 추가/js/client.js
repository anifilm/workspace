CALC.createNameSpace('CALC.dip.before.Client')

CALC.dip.before.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let before = CALC.dip.before;

      let calculator = new before.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new before.AddOperation();
      calculator.setAddOperation(operation);
      let answer = calculator.calculate('+', firstNumber, secondNumber);
      console.log(`${firstNumber} + ${secondNumber} = ${answer}`);

      operation = new before.SubstractOperation();
      calculator.setSubstractOperation(operation);
      answer = calculator.calculate('-', firstNumber, secondNumber);
      console.log(`${firstNumber} - ${secondNumber} = ${answer}`);

      operation = new before.MultiplyOperation();
      calculator.setMultiplyOperation(operation);
      answer = calculator.calculate('*', firstNumber, secondNumber);
      console.log(`${firstNumber} * ${secondNumber} = ${answer}`);
      // 나누기 연산기능 호출
      operation = new before.DivideOperation();
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
