// 8.3 배열 검색

/*
indexOf 메서드는 찾고자 하는 것과 정확히 일치(===)하는 첫 번째 요소의 인덱스를 반환
lastIndexOf는 배열의 끝에서 부터 검색
배열의 일부분만 검색하려면 시작 인덱스를 지정할 수 있다.
일치하는 것을 찾지 못하면 -1을 반환
*/

const o = { name: 'Jerry' };
const arr = [1, 5, 'a', o, true, 5, [1, 2], '9'];

arr.indexOf(5); // 1
arr.lastIndexOf(5); // 5

arr.indexOf('a'); // 2
arr.lastIndexOf('a'); // 2

arr.indexOf({ name: 'Jerry' }); // -1
arr.indexOf(o); // 3
arr.indexOf([1, 2]); // -1
arr.indexOf('9'); // 7
arr.indexOf(9); // -1

arr.indexOf('a', 5); // -1
arr.indexOf(5, 5); // 5
arr.lastIndexOf(5, 4); // 1
arr.lastIndexOf(true, 3); // -1
