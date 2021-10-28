CALC.createNameSpace('CALC.singleton.OperationSingleton');

CALC.singleton.OperationSingleton = (function () {
  class OperationSingleton {
    constructor() {
      if (OperationSingleton._instrance) {
        return OperationSingleton._instrance
      }

      OperationSingleton._instrance = this;
    }

    static getInstance() {
      if (!OperationSingleton._instrance) {
        OperationSingleton._instrance = new OperationSingleton();
      }

      return OperationSingleton._instrance;
    }

    operate(operatorType, firstNumber, secondNumber) {
      let answer = 0;
      let operator = null;

      switch (operatorType) {
        case OperationSingleton.ADD_OPERATION:
          answer = firstNumber + secondNumber;
          operator = '+';
          break;
        case OperationSingleton.SUBSTRACT_OPERATION:
          answer = firstNumber - secondNumber;
          operator = '-';
          break;
        case OperationSingleton.MULTIPLY_OPERATION:
          answer = firstNumber * secondNumber;
          operator = '*';
          break;
        case OperationSingleton.DIVIDE_OPERATION:
          answer = firstNumber / secondNumber;
          operator = '/';
          break;
      }

      let result = `${firstNumber} ${operator} ${secondNumber} = ${answer}`;

      this.print(result);
    }

    print(result) {
      console.log(result);
    }

    toString() {
      return 'OperationSingleton';
    }
  }

  OperationSingleton.ADD_OPERATION = 1;
  OperationSingleton.SUBSTRACT_OPERATION = 2;
  OperationSingleton.MULTIPLY_OPERATION = 3;
  OperationSingleton.DIVIDE_OPERATION = 4;

  return OperationSingleton;

}());
