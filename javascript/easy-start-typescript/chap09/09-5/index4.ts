class Person {
  private name: string;
  private skill: string;

  constructor(name: string, skill: string) {
    this.name = name;
    this.skill = skill;
  }

  private sayHi() {
    console.log('hi');
  }
}

const hulk = new Person('헐크', '소리치기');
console.log(hulk.name);
hulk.sayHi();
