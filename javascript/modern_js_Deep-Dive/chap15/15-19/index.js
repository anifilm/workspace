// 15.3.4 const 키워드와 객체

// 예제 15-19
const person = {
  name: 'Lee'
};

// 객체는 변경 가능한 값이다. 따라서 재할당 없이 변경이 가능하다.
person.name = 'Kim';

console.log(person); // { name: "Kim" }
