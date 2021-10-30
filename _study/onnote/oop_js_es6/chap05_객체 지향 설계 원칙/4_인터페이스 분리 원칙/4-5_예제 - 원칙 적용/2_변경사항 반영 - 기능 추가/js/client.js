CALC.createNameSpace('CALC.isp.after.Client')

CALC.isp.after.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let after = CALC.isp.after;

      let calculator = new after.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new after.AddOperation();
      let calcClient = new after.CalcClient();
      let answer = calcClient.request(calculator, operation, firstNumber, secondNumber);
      console.log(`answer = ${answer}`);

      let displayClient = new after.DisplayClient();
      displayClient.request(calculator, operation, firstNumber, secondNumber);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
