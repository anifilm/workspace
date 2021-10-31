CALC.createNameSpace('CALC.builder.OperationDirector');

CALC.builder.OperationDirector = (function () {
  class OperationDirector {
    constructor(builder) {
      this.builder = builder;
    }

    construct() {
      this.builder.buildFirstNumber();
      this.builder.buildOperator();
      this.builder.buildSecondNumber();
      this.builder.buildAnswer();

      let result = this.builder.getResult();

      console.log(result);
    }
  }

  return OperationDirector;
}());
