// 3.12 객체

const obj = {};
obj.color = 'yellow';

console.log(obj.color);

/*
프로퍼티 이름에 유효한 식별자를 써야 멤버 접근 연산자 '.'(dot,점)를 사용할 수 있습니다. 프로퍼티 이름에 유효한 식별자가 아닌
이름을 쓴다면 계산된 멤버 접근 연산자 [ ](대괄호)를 써야 합니다.
프로퍼티 이름이 유효한 식별자여도 대괄호로 접근할 수 있습니다.
*/

obj['not an identifier'] = 3;

console.log(obj['not an identifier']); // 3
console.log(obj['color']); // "yellow"

// 심볼 프로퍼티에 접근할 때도 대괄호를 사용합니다.
const SIZE = Symbol();
obj[SIZE] = 8;

console.log(obj[SIZE]); // 8
