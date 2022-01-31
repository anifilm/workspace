// 템플릿 문자열
// 타입스크립트에는 변수에 담긴 값을 조합해 문자열을 만들 수 있게 하는 템플릿 문자열 (template string)을
// 제공한다. 이 구문은 역따옴표(backtick) `로 문자열을 감싸고, 변수를 ${} 기호로 감싸는 형태로 사용 가능
// `${변수 이름}`
let count = 10, message = 'Your count';
let result = `${message} is ${count}`;
console.log(result); // Your count is 10
