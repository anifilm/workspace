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
    this.sayHi();
  }

  coding() {
    console.log('fun doing' + this.skill + ' by ' + this.name);
  }
}

const capt = new Developer('캡틴', 'TypeScript');
capt.coding(); // fun doing TypeScript by 캡틴
