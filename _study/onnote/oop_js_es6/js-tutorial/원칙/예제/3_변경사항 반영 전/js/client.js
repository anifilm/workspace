CALC.createNameSpace('CALC.ocp.after.Client')

CALC.ocp.after.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let after = CALC.ocp.after;

      let calculator = new after.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new after.AddOperation();
      calculator.setOperation(operation);
      let answer = calculator.calculate(firstNumber, secondNumber);
      console.log(`${firstNumber} + ${secondNumber} = ${answer}`);

      operation = new after.SubstractOperation();
      calculator.setOperation(operation);
      answer = calculator.calculate(firstNumber, secondNumber);
      console.log(`${firstNumber} - ${secondNumber} = ${answer}`);

      operation = new after.MultiplyOperation();
      calculator.setOperation(operation);
      answer = calculator.calculate(firstNumber, secondNumber);
      console.log(`${firstNumber} * ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
