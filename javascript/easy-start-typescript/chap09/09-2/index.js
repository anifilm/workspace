function Person(name, skill) {
  this.name = name;
  this.skill = skill;
}

Person.prototype.sayHi = function () {
  console.log('hi');
};

const joo = new Person('형주', '인프랩 운영');

console.log(joo.name);  // 형주
console.log(joo.skill); // 인프랩 운영
joo.sayHi();            // hi
