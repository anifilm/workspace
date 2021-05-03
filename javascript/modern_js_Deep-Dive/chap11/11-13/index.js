// 11.2 객체

// 11.2.1 변경 가능한 값

// 예제 11-13
var person = {
  name: 'Lee'
};
// 프로퍼티 값 갱신
person.name = 'Kim';
// 프로퍼티 동적 생성
person.address = 'Seoul';

console.log(person); // { name: "Kim", address: "Seoul" }
