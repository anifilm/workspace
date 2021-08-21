// 예제 8-8 사람 데이터를 저장하는 클로저를 생성하는 함수
function Person(name, age) {
  let _name = name;
  let _age = age;
  return {
    //getName: function () {
    //  return _name;
    //},
    //getAge: function () {
    //  return _age;
    //},
    //setAge: function (x) {
    //  _age = x;
    //}
    getName() {
      return _name;
    },
    getAge() {
      return _age;
    },
    setAge(x) {
      _age = x;
    }
  };
}

const person = Person('Tom', 18);
console.log(person.getName()); // Tom
console.log(person.getAge()); // 18

person.setAge(19);
console.log(person.getAge()); // 19
