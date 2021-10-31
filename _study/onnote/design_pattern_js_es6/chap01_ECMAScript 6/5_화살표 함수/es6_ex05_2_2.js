// 5.2 화살표 함수와 this

// 5.2.2 메서드 몸체안에 정의한 중첩함수 경우2

const calc = {
  firstNumber: 100,
  secondNumber: 20,
  print: function () {
    // this가 calc 객체를 가리킨다.
    // this를 지역변수 self에 할당하여 보존한다.
    let self = this;

    function add() {
      console.log(self); // {firstNumber: 100, secondNumber: 20, print: ƒ}

      // self가 calc 객체를 가리키다.
      return self.firstNumber + self.secondNumber;
    }

    console.log(`${this.firstNumber} + ${this.secondNumber} = ${add()}`); // 100 + 20 = 120
  }
}

calc.print();
