// 다음 코드에서 add 함수는 앞의 add2 함수를 이름만 바꾼 것이다. 고차 함수가 흥미로은 것은 두번째 행의
// 함수 호출 부분이다.
const add = (a: number): (number) => number => (b: number): number => a + b;
const result = add(1)(2);
console.log(result); // 3
