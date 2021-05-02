// 6.1 숫자 타입

// 숫자 타입의 값은 배정밀도 64비트 부동소수점 형식을 따른다.
// 즉, 모든 수를 실수로 처리하며, 정수만 표현하기 위한 데이터 타입(integer type)이 별도로 존재하지 않는다.

// 예제 06-01
// 모두 숫자 타입이다.
var integer = 10; // 정수
var double = 10.12; // 실수
var negative = -20; // 음의 정수

// 예제  06-02
var binary = 0b01000001; // 2진수
var octal = 0o101; // 8진수
var hex = 0x41; // 16진수

// 표기법만 다를 뿐 모드 같은 값이다.
console.log(binary); // 65
console.log(octal); // 65
console.log(hex); // 65
console.log(binary === octal); // true
console.log(octal === hex); // true

// 예제 06-03
// 숫자 타입은 모드 실수로 처리된다.
console.log(1 === 1.0); // true
console.log(4 / 2); // 2
console.log(3 / 2); // 1.5

// 예제 06-04
// 숫자 타입의 세 가지 특별한 값
console.log(10 / 0); // Infinity: 양의 무한대
console.log(10 / -1); // -Infinity: 음의 무한대
console.log(1 * 'String'); // NaN: 산술 연산 불가 (not-a-number)
