// 11.1 Error 객체

// Error 인스턴스를 만들어서 에러 메시지를 지정할 수 있다.
const err = new Error('invalid email');

// 이메일 주소의 유효성을 검사하는 함수 예제
function validateEmail(email) {
  return email.match(/@/) ? email : new Error(`invalid email: ${email}`);
}

// 함수 사용시 instanceof 연산자 사용 (Error 인스턴스 반환 확인)
const email = 'jane@doe.com';

const validateEmail = validateEmail(emali);
if (validateEmail instanceof Error) {
  console.error(`Error: ${validateEmail.message}`);
} else {
  console.log(`Valid emial: ${validateEmail}`);
}

// 위의 방법도 유효하고 유용한 방법이지만, Error 인스턴스는 예외 처리에서 더 자주 사용된다.
