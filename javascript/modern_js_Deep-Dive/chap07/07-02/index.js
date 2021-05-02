// 7.1 산술 연산자

// 7.1.1 이항 산술 연산자
// 예제 07-02
console.log(5 + 2); // 7
console.log(5 - 2); // 5
console.log(5 * 2); // 10
console.log(5 / 2); // 2.5
console.log(5 % 2); // 1

// 7.1.2 단항 산술 연산자
// 예제 07-03
var x = 1;

// ++ 연산자는 피연산자의 값을 변경하는 암묵적 할당이 이뤄진다.
x++; // x = x + 1;
console.log(x); // 2

// -- 연산자는 피연산자의 값을 변경하는 암묵적 할당이 이뤄진다.
x--; // x = x - 1;
console.log(x); // 1

// 예제 07-04
var x = 5, result;

// 선할당 후증가(postfix increment operator)
result = x++;
console.log(result, x); // 5 6

// 선증가 후할당(prefix increment operator)
result = ++x;
console.log(result, x); // 7 7

// 선할당 후감소(postfix decrement operator)
result = x--;
console.log(result, x); // 7 6

// 선감소 후할당(prefix decrement operator)
result = --x;
console.log(result, x); // 5 5
