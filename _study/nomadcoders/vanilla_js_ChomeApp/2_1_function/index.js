function sayHello(name, age) {
  return `Hello ${name}. You are ${age} years old.`;
}

const greetAnifilm = sayHello("anifilm", 43);
console.log(greetAnifilm);

const calculator = {
  plus: function(a, b) {
    return a + b;
  }
}

const plus = calculator.plus(5, 7);
console.log(plus)
