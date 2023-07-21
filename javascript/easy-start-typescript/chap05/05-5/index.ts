class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  logAge() {
    console.log(this.age);
  }
}

class Developer extends Person {
  constructor(name, age, skill) {
    super(name, age);
    this.skill = skill;
  }

  logDeveloperInfo() {
    this.logAge();
    console.log(this.name);
    console.log(this.skill);
  }
}

const capt = new Developer('캡틴', 100, 'js');
capt.logDeveloperInfo(); // 100, 캡틴, js
