// 7.2 할당 연산자

// 예제 07-09
var x;

x = 10;
console.log(x); // 10

x += 5; // x = x + 5;
console.log(x); // 15

x -= 5; // x = x - 5;
console.log(x); // 10

x *= 5; // x = x * 5;
console.log(x); // 50

x /= 5; // x = x / 5;
console.log(x); // 10

x %= 5; // x = x % 5;
console.log(x); // 0

var str = 'My name is ';

// 문자열 연결 연산자
str += 'Lee'; // str = str + 'Lee';
console.log(str); // "MY name is Lee"

// 예제 07-10
var x;

// 할당문은 표현식인 문이다.
console.log(x = 10); // 10

// 예제 07-11
var a, b, c;

// 연쇄 할당. 오른쪽에서 왼쪽으로 진행.
// ① c = 0 : 0으로 평가된다.
// ② b = 0 : 0으로 평가된다.
// ③ a = 0 : 0으로 평가된다.
a = b = c = 0;

console.log(a, b, x); // 0 0 0
