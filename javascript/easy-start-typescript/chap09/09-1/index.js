// 객체 정의 문법
let capt = {
  name: '캡틴',
  skill: '방패 던지기',
};

let lee = {
  name: '길벗',
  skill: '좋은 책 만들기',
};


// 생성자 함수
function Person(name, skill) {
  this.name = name;
  this.skill = skill;
}

capt = new Person('캡틴', '방패 던지기');
lee = new Person('길벗', '좋은 책 만들기');


// 클래스 문법
class Person {
  constructor(name, skill) {
    this.name = name;
    this.skill = skill;
  }
}
