// 6.3 템플릿 리터럴

// 예제 06-08
var template = `Template literal`;
console.log(template); // "Template literal"


// 6.3.1 멀티라인 문자열

// 줄바꿈과 들여쓰기가 적용된 HTML 문자열은 다음과 같이 이스케이프 시퀀스를 사용해 작성할 수 있다.

// 예제 06-10
var template = '\
<ul>\n\
  <li><a href="#">Home</a></li>\n\
</ul>';
console.log(template);

// 일반 문자열과 달리 템플릿 리터럴 내에서는 이스케이프 시퀀스를 사용하지 않고도 줄바꿈이 허용되며, 모든 공백도 있는 그대로 적용된다.

// 예제 06-11
var template = `\
<ul>
  <li><a href="#">Home</a></li>
</ul>`;
console.log(template);


// 6.3.2 표현식 삽입

// 예제 06-12
var first = 'Ung-mo';
var last = 'Lee';

// ES5: 문자열 연결
console.log('My name is ' + first + ' ' + last + '.'); // "My name is Ung-mo Lee."

// 예제 06-13
// ES6: 템플릿 리터럴, 표현식 삽입
console.log(`My name is ${first} ${last}`); // "My name is Ung-mo Lee."

// 예제 06-14
console.log(`1 + 2 = ${1 + 2}`); // "1 + 2 = 3"
