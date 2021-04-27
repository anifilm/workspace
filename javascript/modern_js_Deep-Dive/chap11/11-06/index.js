// 예제 11-06
// 값에 의한 전달 (값 복사 전달)
var score = 80;
var copy = score;

console.log(score); // 80
console.log(copy);  // 80

score = 100;

console.log(score); // 100
console.log(copy);  // 80

// 예제 11-07
var score = 80;
// copy 변수에는 score 변수의 값 80이 복사되어 할단된다.
var copy = score;

console.log(score, copy); // 80 80
console.log(score === copy); // true

/*
이때 score 변수와 copy 변수는 숫자 값 80을 갖는다는 점에서는 동일하다.
하지만 score 변수와 copy 변수의 값 80은 다른 메모리 공간에 저장된 별개의 값이다.
*/

// 예제 11-08
var score = 80;
// copy 변수에는 score 변수의 값 80이 복사되어 할당된다.
var copy = score;

console.log(score, copy); // 80 80
console.log(score === copy); // true

// score 변수와 copy 변수의 값은 다른 메모리 공간에 저장된 별개의 값이다.
// 따라서 score 변수의 값을 변경해도 copy 변수의 값에는 어떠한 영향도 주지 않는다.
score = 100;

console.log(score, copy); // 100 80
console.log(score === copy); // false
