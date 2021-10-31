// 5.2 화살표 함수와 this

// 5.2.3 메서드 몸체안에 정의한 화살표 함수

const calc = {
  firstNumber: 100,
  secondNumber: 20,
  print: function () {
    const add = () => {
      // 화살표 함수 표현식은 this를 함수를 정의할 때의 calc 객체로 고정시킨다.
      console.log(this); // {firstNumber: 100, secondNumber: 20, print: ƒ}

      return this.firstNumber + this.secondNumber;
    }

    console.log(`${this.firstNumber} + ${this.secondNumber} = ${add()}`); // 100 + 20 = 120
  }
}

calc.print();
