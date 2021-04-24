// 8.2.7 배열 정렬과 역순 정렬

// reverse 메서드는 배열 요소의 순서를 반대로 뒤집는다. (정렬하지 않음)
const arr = [5, 3, 2, 4, 1];
arr.reverse(); // [1, 4, 2, 3, 5]

// sort 메서드는 배열 요소의 순서를 정렬
const arr = [5, 3, 2, 4, 1];
arr.sort(); // [1, 2, 3, 4, 5]

// sort 메서드에 정렬 함수 사용
const arr = [{ name: 'Suzanne' }, { name: 'Jim' }, { name: 'Trevor' }, { name: 'Amanda' }];
arr.sort(); // arr은 정렬되지 않는다.
arr.sort((a, b) => a.name > b.name); // arr의 name 프로퍼티의 알파벳순으로 정렬
arr.sort((a, b) => a.name[1] < b.name[1]); // arr의 name 프로퍼티의 두 번째 글자의 알파벳 역순으로 정렬
