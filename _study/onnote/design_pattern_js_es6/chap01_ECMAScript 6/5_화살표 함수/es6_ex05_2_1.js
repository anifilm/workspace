// 5.2 화살표 함수와 this

// 5.2.1 메서드 몸체안에 정의한 중첩함수 경우1

const calc = {
  firstNumber: 100,
  secondNumber: 20,
  print: function () {
    // this가 calc 객체를 가리킨다.
    console.log(this); // {firstNumber: 100, secondNumber: 20, print: ƒ}

    function add() {
      // this가 전역 객체를 가리킨다.
      console.log(this); // Window {...}

      // 전역 객체에는 firstNumber와 secondNumber가 정의되어 있지 않다.
      return this.firstNumber + this.secondNumber;
    }

    console.log(`${this.firstNumber} + ${this.secondNumber} = ${add()}`); // 100 + 20 = NaN
  }
}

calc.print();
