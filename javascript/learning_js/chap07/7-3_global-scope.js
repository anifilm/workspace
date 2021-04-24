// 7.3 전역 스코프

let name = 'Irena'; // 전역 변수
let age = 25; // 전역 변수

function greet() {
  console.log(`Hello, ${name}!`);
}
function getBirthYear() {
  return new Date().getFullYear() - age;
}

/*
위와 같이 전역 변수를 사용하는 방법에 대한 문제점
함수가 호출하는 컨텍스트(스코프)에 대단히 의존적이라는 겁니다. 어떤 함수든,
프로그램 어디에서든 상관없이 name 값이 (의도적으로든, 실수로든) 변경될 수 있습니다.
greet와 getBirthYear는 전역 변수에 의존되어 있으므로 전역 변수의 값이 변경 됨에 따라
원하는 결과를 얻을 수 없을 수도 있습니다.

아래와 같이 사용자 정보는 단일 객체에 보관하는 방법이 더 좋습니다.
*/

let user = {
  name = 'Irena',
  age = 25,
};

function greet() {
  console.log(`Hello, ${user.name}!`);
}
function getBirthYear() {
  return new Date().getFullYear() - user.age;
}

/*
함수 greet과 getBirthYear는 여전히 전역 user에 의존하며, 이 객체는 어디서든 수정이
가능하므로 함수는 아직 전역 스코프에 의존적입니다.

다음과 같이 전역 스코프에 의존하지 않게 만들어 봅시다.
*/

function greet(user) {
  console.log(`Hello, ${user.name}!`);
}
function getBirthYear(user) {
  return new Date().getFullYear() - user.age;
}
