// 5.3.2 문자열을 조작하는 메서드

var msg = 'Everything is practice.';

console.log(msg.length); // 23
console.log(msg.charAt(3)); // r

console.log(msg); // Everything is practice.


var msg = new String('Everything is practice.');
console.log(msg); // String {"Everything is practice."}

var msg = new String('Everything is practice.').valueOf();
console.log(msg); // Everything is practice.


msg.substring(7, 10); // ing (7번째 문자부터 10번째 문자 이전의 문자열)
msg.slice(7, 10); // ing (위와 동일)
msg.slice(-3); // ce. (뒤에서 3번째 문자부터 끝까지)
msg.slice(-9, -6); // pra (끝에서 9번째 문자부터 끝에서 6번째 문자 이전의 문자열)
msg.indexOf('t'); // 5 (문자 't'가 처음 나오는 인덱스)
msg.indexOf('i', 10); // 11 (인덱스 10 이후 문자에서 문자 'i'가 처음 나오는 인덱스)
msg.lastIndexOf('t'); // 18 (문자 't'가 마지막으로 나오는 인덱스)
msg.split(' '); // ['Everything', 'is', 'practice.'] (' ' 공백으로 문자열을 나누어 배열로 반환)
msg.replace('p', 'P'); // Everything is Practice.
msg.toUpperCase(); // EVERYTHING IS PRACTICE.
msg.endsWith('.') // true (문자열이 '.'로 끝나는지를 논리값으로 반환)
msg.includes('thing'); // true ('thing'이 포함되어 있는지를 논리값으로 반환)
msg.charCodeAt(0); // 69 (문자 'E'의 UTF-16 문자 코드)
msg.codePointAt(0); // 69 (문자 'E'의 UTF-16 코드 포인트)


// 5.3.3 String 생성자의 메서드

String.fromCharCode(0xAE38) // 길
String.fromCharCode(65, 66, 67); // ABC


// 5.3.4 문자열을 배열로 읽고 쓰기

var msg = 'Everything is practice.';

msg[3]; // r
msg[msg.length - 1]; // .

/* 문자열을 읽을 때는 charAt 메서드 대신 대괄호 연산자를 사용할 수 있다.
   그러나 배열처럼 값을 대입해서 수정할 수는 없다. (대입해도 무시됨) */
