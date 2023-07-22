class Person {
  name: string;
  skill: string;

  constructor(name: string, skill: string) {
    this.name = name;
    this.skill = skill;
  }
}

const capt = new Person('캡틴', '방패 던지기');
console.log(capt.name);  // 캡틴
console.log(capt.skill); // 방패 던지기

capt.name = '헐크';
console.log(capt.name);  // 헐크
