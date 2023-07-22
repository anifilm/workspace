class Person {
  constructor(name, skill) {
    this.name = name;
    this.skill = skill;
  }

  sayHi() {
    console.log('hi');
  }
}

const joo = new Person('형주', '인프랩 운영');

joo.sayHi(); // hi
