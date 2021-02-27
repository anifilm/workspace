// 6.8 call과 apply, bind

/*
자바스크립트에서는 일반적인 방법 외에도, 함수를 어디서, 어떻게 호출했느냐와 관계없이 this가
무엇인지 지정할 수 있습니다. 먼저 call 메서드부터 시작합시다.
call 메서드는 모든 함수에서 사용할 수 있으며, this를 특정 값으로 지정할 수 있습니다.
*/

const bruce = { name: "Bruce" };
const madeline = { name: "Madeline" };

// 이 함수는 어떤 객체에도 연결되지 않았지만 this를 사용합니다.
function greet() {
  return `Hello, I'm ${this.name}!`;
}

greet();              // "Hello, I'm undefined!" - this는 어디에도 묶이지 않았습니다.
greet.call(bruce);    // "Hello, I'm Bruce!"     - this는 bruce 입니다.
greet.call(madeline); // "Hello, I'm Madeline!"  - this는 madeline 입니다.

/*
함수를 호출하면서 call을 사용하고 this로 사용할 객체를 넘기면 해당 함수가 주어진 객체의 메서드인
것처럼 사용할 수 있습니다. call의 첫 번째 매개변수는 this로 사용할 값이고, 매개변수가 더 있으면
그 매개변수는 호출하는 함수로 전달됩니다.
*/

function update(birthYear, occupation) {
  this.birthYear = birthYear;
  this.occupation = occupation;
}

update.call(bruce, 1949, 'singer');
// bruce는 이제 { name: "Bruce", birthYear: 1949, occupation: "singer"} 입니다.
update.call(madeline, 1942, 'actress');
// madeline는 이제 { name: "Madeline", birthYear: 1942, occupation: "actress"} 입니다.
