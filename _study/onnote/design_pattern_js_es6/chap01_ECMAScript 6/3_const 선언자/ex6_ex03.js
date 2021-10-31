// 3.1 상수를 선언한다.

const num = 10;

console.log(num); // 10


// 3.2 상수는 선언과 동시에 초기화 해야 한다.

const num;
// SyntaxError: Identifier 'num' has already been declared
// 에러가 발생하여 코드 실행이 멈춘다.

num = 10;

console.log(num);


// 3.3 초기값을 설정한 후 상수에 값을 할당할 수 없다.

const num = 10;

console.log(num); // 10

num = 100;
// SyntaxError: Identifier 'num' has already been declared
// 에러가 발생하여 코드 실행이 멈춘다.

console.log(num);


// 3.4 중복 선언은 불가능하다.

const num = 10;

console.log(num); // 10

// 중복 선언 불가능
const num = 20;
// SyntaxError: Identifier 'num' has already been declared
// 문법 에러가 발생해서 코드 해석이 여기에서 멈춘다.

console.log(num);
