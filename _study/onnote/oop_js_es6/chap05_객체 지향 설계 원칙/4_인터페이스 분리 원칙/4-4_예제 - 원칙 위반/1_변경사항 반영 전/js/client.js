CALC.createNameSpace('CALC.isp.before.Client')

CALC.isp.before.Client = (function () {
  class Client {
    constructor() {

    }

    main() {
      let before = CALC.isp.before;

      let calculator = new before.Calculator();

      let firstNumber = 100;
      let secondNumber = 20;

      let operation = new before.AddOperation();
      let calcClient = new before.CalcClient();
      let answer = calcClient.request(calculator, operation, firstNumber, secondNumber);
      console.log(`answer = ${answer}`);

      let displayClient = new before.DisplayClient();
      displayClient.request(calculator, operation, firstNumber, secondNumber);
    }

    toString() {
      return 'Client';
    }
  }

  return Client;
}());
