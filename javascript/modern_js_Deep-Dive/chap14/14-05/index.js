// 14.3.2 네임스페이스 객체

// 예제 14-05
var MYAPP = {}; // 전역 네임스페이스 객체

MYAPP.name = 'Lee';

console.log(MYAPP.name); // "Lee"

// 예제 14-06
var MYAPP = {}; // 전역 네임스페이스 객체

MYAPP.person = {
  name: 'Lee',
  addredd: 'Seoul',
};

console.log(MYAPP.person.name); // "Lee"
