class Person {
  constructor(name, skill) {
    this.name = name;
    this.skill = skill;
  }

  sayHi() {
    console.log('hi');
  }
}

class Developer extends Person {
  constructor(name, skill) {
    super(name, skill);
  }

  coding() {
    console.log('fun');
  }
}

const capt = new Developer('캡틴', '방패 던지기');
capt.sayHi();  // hi
capt.coding(); // fun

console.log(capt.name);  // 캡틴
console.log(capt.skill); // 방패 던지기
