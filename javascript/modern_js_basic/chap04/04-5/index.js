// 4.5.1 배열 리터럴로 생성하기

var evens = [2, 4, 6, 8];

var empty = [];
console.log(empty); // []

var a = [2, , 4];
console.log(a); // [2, empty, 4]

var various = [3.14, 'pi', true, { x: 1, y: 2 }, [2, 4, 6, 8]];


// 4.5.2 length 프로퍼티

var evens = [2, 4, 6, 8];
evens.length; // 4

var a = ['A', 'B', 'C', 'D'];
a.length = 2;
console.log(a); // ['A', 'B']


// 4.5.3 Array 생성자로 생성하기

var evens = new Array(2, 4, 6, 8) // [2, 4, 6, 8]을 생성
var empty = new Array(); // 빈 배열 []을 생성
var a = new Array(2, 4); // 배열 리터럴 [2, 4]와 같은 배열을 생성
var various = new Array(3.14, 'pi', true, { x: 1, y: 2 }, [2, 4, 6, 8]);

// 길이가 3인 빈 배열 생성
var x = new Array(3);
console.log(x); // [empty × 3]
console.log(x.length); // 3


// 4.5.4 배열 요소의 참조

evens[2]; // 6(인덱스가 2인 요소, 즉 세 번째 요소)


// 4.5.5 배열은 객체
// -> 자바스크립트의 배열은 Array 객체이며 객체로 배열의 기능을 가상으로 흉내 낸 것
// -> Array 객체는 배열의 인덱스를 문자열로 변환해서 그것을 프로퍼티로 이용
// -> 배열의 요소 번호로 숫자 값 대신 문자열을 사용할 수 있다.
var a = ['A', 'B', 'C', 'D'];
console.log(a['2']); // C

a[4]; // undefined
console.log(a[4]);


// 4.5.6 배열 요소의 추가와 삭제

var a = ['A', 'B', 'C'];
a[3] = 'D'; // 없는 배열 요소에 값을 대입하면 새로운 요소가 추가된다.
console.log(a); // ['A', 'B', 'C', 'D']

var a = ['A', 'B', 'C'];
a.push('D'); // 요소를 배열 끝에 추가
console.log(a); // ['A', 'B', 'C', 'D']

delete a[1]; // 특정 배열 요소를 삭제
console.log(a); // [ 'A', empty, 'C', 'D' ]


// 4.5.7 희소 배열

var a = ['A', 'B', 'C'];
a[4] = 'E';
console.log(a); // ['A', 'B', 'C', empty, 'E']

console.log(a[3]); // empty is 'undefined'
console.log(a.length); // 5

// 희소 배열은 객체 리터럴과 유사하다.
var b = {
  0: 'A',
  1: 'B',
  2: 'C',
  3: undefined,
  4: 'E'
}
console.log(b);
console.log(b[3]);   // undefined
console.log(b['3']); // undefined
console.log(Object.keys(b).length);

// 배열 요소가 있는지 확인학.
for (var i in a) {
  console.log(i); // 0, 1, 2, 4가 표시됨
}

a.hasOwnProperty('3'); // false
console.log(a.hasOwnProperty('3'));
a.hasOwnProperty('4'); // true
console.log(a.hasOwnProperty('4'));
