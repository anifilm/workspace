// 6.8 call과 apply, bind

const bruce = { name: 'Bruce' };
const madeline = { name: 'Madeline' };

function update(birthYear, occupation) {
  this.birthYear = birthYear;
  this.occupation = occupation;
}

/*
apply는 함수 매개변수를 처리하는 방법을 제외하면 call과 완전히 같습니다. call은 일반적인 함수와
마찬가지로 매개변수를 직접 받지만, apply는 매개변수를 배열로 받습니다.
*/

update.apply(bruce, [1949, 'singer']);
// bruce는 이제 { name: "Bruce", birthYear: 1949, occupation: "singer"} 입니다.
update.apply(madeline, [1942, 'actress']);
// madeline는 이제 { name: "Madeline", birthYear: 1942, occupation: "actress"} 입니다.

/*
apply는 배열 요소를 함수 매개변수로 사용해야 할 때 유용합니다. apply를 설명할 때 흔히 사용하는
예제는 배열의 최소값과 최대값을 구하는 겁니다. 자바스크립트의 내장 함수인 Math.min과 Math.max는
매개변수를 받아 그중 최소값과 최대값을 각각 반환합니다. apply를 사용하면 기존 배열을 이들 함수에
바로 넘길 수 있습니다.
*/

const arr = [2, 3, -5, 15, 7];
Math.min.apply(null, arr); // -5
Math.max.apply(null, arr); // 15

/*
this의 값에 null을 쓴 이유는 Math.min과 Max.max가 this와 관계없이 동작하기 때문입니다.
즉, 무엇을 넘기는 관계없습니다.

ES6의 확산 연산자(...)를 사용해도 apply와 같은 결과를 얻을 수 있습니다. update 메서드는
this 값이 중요하므로 call을 사용해야 하지만, Math.min과 Math.max는 this 값이 무엇이든 관계
없으므로 확산 연산자를 그대로 사용할 수 있습니다.
*/

const newBruce = [1940, 'martial artist'];
updat.call(bruce, ...newBruce); // apply(bruce, newBruce)와 같습니다.
Math.min(...arr); // -5
Math.max(...arr); // 15
